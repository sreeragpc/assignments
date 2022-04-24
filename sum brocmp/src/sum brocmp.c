/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    int number1;
		float number2,sum;
		setbuf(stdout,NULL);
		printf("enter 2 numbers(1st number should be an integer and 2nd number should be a number with decimal point)");
		scanf("%d%f",&number1,&number2);
		printf("entered numbers are \n1: %d\n2: %f ",number1,number2);
		sum=number1+number2;
		printf("\nsum=%f",sum);



	return EXIT_SUCCESS;
}
