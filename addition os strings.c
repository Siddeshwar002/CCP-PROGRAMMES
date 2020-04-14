#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int n1 = 0, n2 = 0;
  int i;

  printf ("enter string 1\n");
  char s1[100];
  scanf ("%s", s1);

  for (i = 0; s1[i] != '\0'; i++)
    {
      n1++;
    }

  printf ("enter string 2\n");
  char s2[100];
  scanf ("%s", s2);

  for (i = 0; s2[i] != '\0'; i++)
    {
      n2++;
    }



  s1[n1 + n2];

  int x = 0;


  for (i = 0; i < n2; i++)
    {
      s1[n1 + x] = s2[x];
      x++;
    }
  for (i = 0; i < n1 + n2; i++)
    {
      printf ("%c", s1[i]);
    }
}