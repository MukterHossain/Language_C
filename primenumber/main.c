#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,n,p=0;
 printf("Enter the number;");
 scanf("%d",&n);
 for(i=1;i<=0;i++)
 {
     if(n%i==0)
     {
         p++;
     }
 }
 if(p==0)
 {
     printf("%d Number is prime.\n",n);
 }
 else
 {
     printf("%d Number is not prime.\n",n);
 }
 return 0;
}
