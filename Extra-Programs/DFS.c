#include <stdio.h>
#include <process.h>
#include <stdlib.h>

void dfs(int);
int a[10][10],vis[10],n;
int main()
{
 int i,j,src;
 int choice;
 while(1)
 {
  printf("\n1.Depth First Search\n2.Exit\n");
  printf("Enter the Choice :");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("Enter the No: of Vertices :");
          scanf("%d",&n);
          printf("Enter the Adjacency Matrix :\n");
          for(i=1;i<=n;i++)
          {
           for(j=1;j<=n;j++)
          {
           scanf("%d",&a[i][j]);
          }
          }
          for(i=1;i<=n;i++)
          vis[i]=0;
 
          printf("Enter the Source Vertex :");
          scanf("%d",&src);
          printf("\nNodes reachable from Vertex %d are : \n",src);
          dfs(src);
          break;
   case 2:exit(0);
          break;
   default:exit(0);              
 }
 } 
 return 0;
}


void dfs(int v)
{
 int i;
 vis[v]=1;
 printf("%d\n",v);
 for(i=1;i<=n;i++)
 {
  if(a[v][i]==1 && vis[i]==0)
  {
   dfs(i);
  }
 }
}   
 
 
