#include <stdio.h>
#include <stdlib.h>

int main()
{
/*int a[3][3]={{1,1,1},{2,2,2},{3,3,3}};
int b[3][3]={{1,1,1},{2,2,2},{3,3,3}};*/

int i,j,k,m,n,a[10][10],b[10][10],c[10][10];


printf("enter the number of row=");
scanf("%d",&m);
printf("enter the number of column=");
scanf("%d",&n);
printf("enter the first matrix element=\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix element=\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}



printf("multiply of the matrix=\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}


/*
for(i=0;i<m;i++){
   for(j=0;j<n;j++){
    c[i][j]=0;
    for(k=0;k<n;k++){
        c[i][j]+=c[i][k]*c[k][j];
    }
   }
}
*/

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0;
}
