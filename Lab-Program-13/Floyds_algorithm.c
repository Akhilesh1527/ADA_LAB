#include<stdio.h>
#include<conio.h>
void floyds();
int min(int,int);
int c[10][10], d[10][10], i,j,k,n;

int main()
{
 printf("Enter the No: of vertices :");
 scanf("%d",&n);
 printf("Enter the Cost Adjacency matrix :\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
 {
  scanf("%d",&c[i][j]);
 }
 }
 floyds();
 printf("\nDistance Matrix :\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
 {
  printf("%d  ",d[i][j]);
 }
  printf("\n");
 }
 return 0;
}
int min(int a,int b)
{
    if(a<b)
    {
        return(a);
    }
    else
    {
        return(b);
    }
}
void floyds()
{
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   d[i][j]=c[i][j];
  }
 }
 for(k=1;k<=n;k++)
 {
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
   }
  }
 }
}
