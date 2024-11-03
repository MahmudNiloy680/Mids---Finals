#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000], b[1000], c[1000];
  
  scanf("%s %s %s", a, b, c);
  
  if (strcmp(a, b) <= 0) //a<b
  {
    if (strcmp(a, c) <= 0) //a<c
    {
      printf("%s\n", a); //min a
      
      if (strcmp(b, c) <= 0) //either c max or b max
      {
        printf("%s\n", c); //b<c
      }
      else
      {
        printf("%s\n", b); //c<b
      }
    }
    else //c<a also a<b
    {
      printf("%s\n%s", c, b); // c min, b max
      
    }
  }
  else //b<a
  {
    if (strcmp(b, c) <= 0) // b<c also b<a 
    {
      printf("%s\n", b); // b min
      
      if (strcmp(a,c) <= 0) //either c max or a max
      {
        printf("%s\n", c); //a<c
      }
      else
      {
        printf("%s\n", a); //c<a
      }
    }
    else //c<b, b<a
    {
      printf("%s\n%s", c, a); // c min, a max
      
    }
  }
  return 0;
}