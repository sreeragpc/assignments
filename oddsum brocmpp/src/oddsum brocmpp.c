/*
 ============================================================================
 Name        : oddsum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,sum=0;
    setbuf(stdout,NULL);
	printf("enter a limit up to which you need sum of odd numbers");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(i%2==1)
			sum=sum+i;
		}
	printf("sum=%d",sum);
	return EXIT_SUCCESS;
}
