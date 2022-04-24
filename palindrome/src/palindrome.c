/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char name[500];
    int i,n,flag=0;
    setbuf(stdout,NULL);
	printf("enter a string");
	scanf("%s",name);
	n=strlen(name);
	for(i=0;i<=n/2;i++){
		if(name[i]!=name[n-i-1])
		{flag=1;

		}

	}
	if(flag){printf("\ngiven string is not a palindrome");}
	else{
		printf("\ngiven string is a palindrome");}


	return EXIT_SUCCESS;
}
