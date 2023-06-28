#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry into the function
 *
 *Return 1 if positive and 0 otherwise
 */
int main(void)
{
	char password[9 + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;
	srand(time(NULL));

	for (i = 0;i < 9; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	password[9] = '\0';
	printf("%s\n", password);
	return (0);

}
