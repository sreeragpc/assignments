/*
 ============================================================================
 Name        : switchweek.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    int input;
		setbuf(stdout,NULL);
		printf("enter a number corresponding to day in a week:");
		scanf("%d",&input);
		switch(input){
		case 1:
					printf("sunday");
				break;
		case 2:
				    printf("monday");
				break;
		case 3:
					printf("tuesday");
				break;
		case 4:
					printf("wednesday");
				break;
		case 5:
					printf("thursday");
				break;
		case 6:
					printf("friday");
				break;
		case 7:
					printf("saturday");
				break;
		default:
					printf("invalid entry");
				break;
		}
	return EXIT_SUCCESS;
}
