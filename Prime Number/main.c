#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, p = 0;
  printf("Enter the number : ");
  scanf("%d", &n);
  for (i = 1 ; i <= n ; i++)
  {
      if ( n % i == 0)
      {
          p++;
      }
  }
  if (p==2)
  {
      printf("%d is a prime number.\n",n);
  }
  else
  {
      printf("%d is not a prime number",n);
  }
  return 0;
}
