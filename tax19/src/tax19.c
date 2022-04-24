/*
 ============================================================================
 Name        : tax19.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float annualincome,taxamount,k;
	setbuf(stdout,NULL);
	printf("Enter the annual income:");
	scanf("%f",&annualincome);
	if(annualincome>=1000000 && annualincome<=5000000){
		k=30;
	}
	else if(annualincome>=500000 && annualincome<=1000000){
		k=20;
	}
	else if(annualincome>=250000 && annualincome<=500000){
			k=5;
		}
	else{printf("no tax");
		}
	taxamount=annualincome*k/100;
	printf("Income tax amount =%f",taxamount);
	return EXIT_SUCCESS;
}
