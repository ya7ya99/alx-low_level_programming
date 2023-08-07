#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c){
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return 0;
	while (size--)
		n[size] = c;
	return n;
}
