#include <stdio.h>
#include <process.h>
#include <stdlib.h>

void dfs(int);
int a[10][10],vis[10],n;
int main()
{
 int i,j,src,choice;
 int count=0;
 while(1)
 {
  printf("\n1.Connected and Disconnected Graph\n2.Exit\n");
  printf("Enter the Choice :");
  scanf("%d",&choice);
  switch(choice)
 { 
  case 1: printf("Enter the No: of Vertices :");
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
         printf("\nThe Path from Vertex %d is : \n",src);
         dfs(src);
  
 
        for(i=1;i<=n;i++)
       {
        if(vis[i])
        count++;
       } 
       if(count==n)
       {
        printf("\nGraph is connected");
       } 
       else
       {
		printf("\nGraph is not connected");
	   }	
       break;
       
  case 2: exit(0);
          break;
  default: exit(0);     
 } 
}
return 0;
}


void dfs(int v)
{
 int i;
 vis[v]=1;
 
 for(i=1;i<=n;i++)
 {
  if(a[v][i]==1 && vis[i]==0)
  {
   printf("\n%d to %d\n",v,i);
   dfs(i);
  }
 }
}   
 
 

