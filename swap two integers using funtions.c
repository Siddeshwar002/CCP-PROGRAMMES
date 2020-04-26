#include <stdio.h>
#include <stdlib.h>

int a,b,t;

   int swap(int *x,int *y)
{

    t=*x;
    *x=*y;
    *y=t;

}

int main()
{
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("the nos after swapping are %d and %d",a,b);
}


