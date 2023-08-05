#include <stdio.h>

/**
 * main - print programs name , followed by a new line
 *
 * @argc: int
 * @argv:list
 * Return: 0 On success
 */
int main(int argc,  char const *argv[])
{
	(void)argc:
	printf("%s\n", argv[0]);
	return (0);
}
