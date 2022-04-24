/*
 ============================================================================
 Name        : pattern1brcmp.c
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
    setbuf(stdout,NULL);
	printf("enter a limit up to which you need pattern");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{for(j=1;j<=i;j++)
		{printf("%d",j);}
	printf("\n");

	}


	return EXIT_SUCCESS;
}
