#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float sum=0;
    float avg=0;

    printf("how many nos\n");
    scanf("%d",&n);

    if(n>0)
    {
    float a[n];
    printf("enter the numbers\n");

    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }


    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;

    printf("the average of %d nos is =%f",n,avg);
    }
    else if(n==0)
    {
        printf("sum = 0\n");
    }
    else{
        printf("invalid\n");
    }

}


