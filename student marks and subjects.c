#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,z,y,j,f;
    int sum;
    char c[5]="sub";
     char d='s';
     x=1;
     int n1=5,n2=3;

     int a[n1][n2];

     for(i=0;i<n1;i++)
     {
         printf("enter the marks obtained by student %d\n",i+1);
         for(j=0;j<n2;j++)
         {
             scanf("%d",&a[i][j]);
         }
         printf("\n");
     }
     printf("\t");

     for(i=0;i<n2;i++)
     {
         printf("%s%d\t",c,x);
         x++;
     }

     printf("\n");
     x=1;
     y=0;
     for(i=0;i<n1;i++)
     {
         printf("%c%d\t",d,x);
         x++;
             z=0;
         for(j=0;j<n2;j++)
         {
             printf("%d\t",a[y][z]);
            z++;
            }

         printf("\n");
         y++;
     }

    printf("highest\t");

    for(y=0;y<n2;y++)
    {
        f=0;
        for(x=0;x<n1;x++)
        {
            f=0;
            for(i=0;i<n1;i++)
            {
                if(a[x][y]>=a[i][y])
                {
                    f++;
                }
            }
            if(f==n1)
            {
                printf("%d\t",a[x][y]);
                break;
            }
        }
    }
}