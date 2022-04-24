/*
 ============================================================================
 Name        : star25.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit;
	limit=10;
	for(i=0;i<=limit;i++){
		for(j=0;j<i;j++){
			printf("**");
			if(j%2==1){
				continue;
			}printf("\n*");
		}
	}
	return EXIT_SUCCESS;
}
