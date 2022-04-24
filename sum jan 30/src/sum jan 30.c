/*
 ============================================================================
 Name        : char.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	setbuf(stdout,NULL);
	printf("enter a letter\n");
	scanf("%c",&a);
	printf("\n Entered charecter is :%c",a);
	return 0;
}
