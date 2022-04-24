/*
 ============================================================================
 Name        : swap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=20,b=30,trmp;
	trmp=a;
	a=b;
	b=trmp;
	printf("a;% b:%d",a,b);
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
