#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(1);
  }

  FILE *fp = fopen(argv[1], "r");
  if (fp == NULL) {
    fprintf(stderr, "Failed to open file '%s'\n", argv[1]);
    exit(1);
  }

  Elf64_Ehdr elf_header;
  if (lseek(fileno(fp), 0, SEEK_SET) != 0) {
    fprintf(stderr, "Failed to lseek to start of file\n");
    exit(1);
  }

  int nread = read(fileno(fp), &elf_header, sizeof(elf_header));
  if (nread != sizeof(elf_header)) {
    fprintf(stderr, "Failed to read ELF header\n");
    exit(1);
  }

  if (elf_header.e_ident[EI_MAG0] != 0x7f || elf_header.e_ident[EI_MAG1] != 'E' ||
      elf_header.e_ident[EI_MAG2] != 'L' || elf_header.e_ident[EI_MAG3] != 'F') {
    fprintf(stderr, "File '%s' is not an ELF file\n", argv[1]);
    exit(1);
  }

  printf("Magic: %s\n", elf_header.e_ident);
  printf("Class: %d\n", elf_header.e_class);
  printf("Data: %d\n", elf_header.e_data);
  printf("Version: %d\n", elf_header.e_version);
  printf("OS/ABI: %d\n", elf_header.e_osabi);
  printf("ABI Version: %d\n", elf_header.e_abiversion);
  printf("Type: %d\n", elf_header.e_type);
  printf("Entry point address: %x\n", elf_header.e_entry);

  fclose(fp);
  return 0;
}

