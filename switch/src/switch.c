/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("1 for biri \n 2 for poro \n 3 for manthi \n 4 choru ");
	scanf("%d",&a);
	switch(a){
	case 1:
		printf("u hv slted bir");
		break;
	case 2:
			printf("u hv slted poro");
			break;
	case 3:
			printf("u hv slted mnthi");
			break;
	case 4:
			printf("u hv slted choruu");
			break;
	default:
		printf("fool");

	}
	return EXIT_SUCCESS;
}
