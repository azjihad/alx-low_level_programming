#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;

	/* Swap characters from both ends towards the middle */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
