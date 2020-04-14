#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,t;
    printf("enter rows\n");
    scanf("%d",&x);
    printf("enter columns\n");
    scanf("%d",&y);
    int a[x][y];
    printf("enter elements\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("matrix before transpose\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    printf("matrix after transpose \n\n\n");

    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
