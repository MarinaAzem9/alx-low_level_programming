#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - Prints a sentence before the main function is executed.
 */
void before_main(void)
{
	printf("You're here before the main function!\n");
	printf("I'm ready to assist you!\n");
}
