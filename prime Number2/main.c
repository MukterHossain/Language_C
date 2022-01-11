#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i,p=0;
 printf("Enter Number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(i%n==0)
 {
    p++;
 }
 if(p==2)
 {
    printf("%d Number is prime.\n",n);
 }
 else
 {
    printf("%d Number Is Not prime.\n",n);
 }
return 0;
}
