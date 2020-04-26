#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b;
    int *x=&a;
    int *y=&b;


    printf("enter the two integers\n");
    scanf("%d%d",&a,&b);

   printf("the sum of two integers is %d \n",*x+*y);

  printf("the difference between the integres is %d\n",*x-*y);

    printf("the product of two integers is %d\n",(*x)*(*y));

    printf("the division of two integers is %d\n",(*x)/(*y));

    printf("the remainder of the integers is %d\n",(*x)%(*y));

    }

