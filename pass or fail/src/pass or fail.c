/*
 ============================================================================
 Name        : pass.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("enter the mark you got:");
	scanf("\n%f",&mark);
	if(mark <50){
		printf("\nfailed");

	}else{
		printf("passed");
	}

	return EXIT_SUCCESS;
}
