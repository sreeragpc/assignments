/*
 ============================================================================
 Name        : percentage.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Totalmark;
	setbuf(stdout,NULL);
	printf("enter the Total mark percentage you got to know your grade:");
	scanf("%f",&Totalmark);
	if(Totalmark>=90){
		printf("\nyour grade is A");
	}else if(Totalmark>=80){
		printf("\nyour grade is B");
	}else if(Totalmark>=70){
		printf("\nyour grade is C");
	}else if(Totalmark>=60){
		printf("\nyour grade is D");
	}else if(Totalmark>=50){
		printf("\nyour grade is E");
	}else{
		printf("\nfailed");
	}

	return EXIT_SUCCESS;
}
