#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int n;
  printf("string lenght\n");
  scanf("%d",&n);
  char s[n];
  printf("enter string\n");
  scanf("%s",s);
  int x,y,z,i;
  x=0;
  z=0;
  y=n-1;
  for(i=0;i<n/2;i++)
  {
      if(s[x]==s[y])
      {
          x++;
          y--;
          z++;
      }
      
  }
  if(z==n/2)
  {
      printf("palindrome \n ");
  }
  else{
      printf("not a palindrome\n");
  }
}