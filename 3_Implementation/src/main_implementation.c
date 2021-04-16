#include<stdio.h>
#include "calculator_function.h"
#include<math.h>
#include<stdlib.h>

void main_operation()
{
    int n;
    printf("\n=======*** WELCOME TO CALCULATOR ***======\n");
    printf("1.Arithmetic operations\n");
    printf("2.Special operations\n");
	printf("\n Choose an option\n");
    scanf("%d",&n);
    if(n==1)
    {
        arthmetic_operation();
    }
    else if(n==2)
    {
        special_operation();
    }
    else
    {
      printf("Wrong choice\n");
      exit(0);
    }
}
