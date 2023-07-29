#include "main.h"
#include <stdio.h>
/**
 * *rot13 - function that encodes a string using rot13.
 * @s: Pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int x;
	int y;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data[y])
			{
				s[x] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
