/*
 ============================================================================
 Name        : new.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[500];
	int i,limit,searchkey,flag=0;
	printf("enter number of arrays");
	scanf("%d",&limit);
	printf("enter numbers");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("enter search key");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==a[i]){
			flag=1;
			break;
		}
	}
	if (flag==1){
		printf("found at %d",i+1);}
	else{printf("not found");
	}

	return EXIT_SUCCESS;
}
