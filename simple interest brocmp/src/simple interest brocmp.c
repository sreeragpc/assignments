/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	        int P;
			float R,SI,n;
			setbuf(stdout,NULL);
			printf("enter \n1:principal amount\n2:interest rate\n3:number of years");
			scanf("%d%f%f",&P,&R,&n);
			printf("entered values of \n1:principal amount=%d\n2:interest rate=%f\n3:number of years=%f",P,R,n);
			SI=P*R*n/100;
			printf("\n\nSimple Interest=%f",SI);

	return EXIT_SUCCESS;
}
