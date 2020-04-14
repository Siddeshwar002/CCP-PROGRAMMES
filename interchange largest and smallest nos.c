#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the size \n");
    scanf("%d",&n);
    if(n>0){

    printf("enter elemnts\n");
        int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int x,y,d,a,b,temp;



    for(x=0;x<n;x++)
    {
            d=0;
        for(y=0;y<n;y++)
        {
            if(s[x]<=s[y])
            {
                d++;
            }
        }
        if(d==n)
        {
            s[x];
            break;
        }
    }
    
    
    for(a=0;a<n;a++)
    {
            d=0;
        for(b=0;b<n;b++)
        {
            if(s[a]>=s[b])
            {
                d++;
            }
        }
        if(d==n)
        {
            s[a];
            break;
        }
    }
    temp=s[x];
    s[x]=s[a];
    s[a]=temp;
    
    printf("the new array after rearrangement\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",s[i]);
    }
}
else{
    printf("invalid entry\n");
}
}