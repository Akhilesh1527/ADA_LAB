#include <stdio.h>
#include <process.h>

void bfs(int);
int a[10][10],vis[10],n;

int main()
{
int i,j,src;
printf("\nEnter the No: of Vertices:");
scanf("%d",&n);
printf("\nEnter the Adjacency Matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the Source Vertex:");
scanf("%d",&src);
printf("Nodes reachable from vertex %d are :\n",src);
for(i=0;i<n;i++)
vis[i]=0;
bfs(src-1);
return 0;
}
void bfs(int v)
{
int q[10],f=0,r=0,u,i;
vis[v]=1;
q[r]=v;
while(f<=r)
{
u=q[f];
printf("%d\n",(u+1));

for(i=0;i<n;i++)
{
if(a[u][i]==1&&vis[i]==0)
{
vis[i]=1;
r=r+1;
q[r]=i;
}

}
f=f+1;
}
}
