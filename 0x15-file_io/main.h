#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#define BUFSIZE 1024
void _puts(char *str);
void print_hex(unsigned int n);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void print_elf_osabi(Elf64_Ehdr *header);
void print_elf_version(Elf64_Ehdr *header);
void print_elf_data(Elf64_Ehdr *header);
void print_elf_class(Elf64_Ehdr *header);
void print_elf_ident(Elf64_Ehdr *header);
void print_hex(unsigned int n);
int _putchar(char c);
#endif
