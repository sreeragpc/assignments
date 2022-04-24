/*
 ============================================================================
 Name        : swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=20,b=40,c;
	c=a;
	a=b;
	b=c;
	printf("values a:%d b:%d",a,b);
	return 0;
}
