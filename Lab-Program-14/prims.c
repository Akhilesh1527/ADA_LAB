#include<stdio.h>
#include<process.h>

int vis[10],vt[10],edge[10][10],e=0; 
int i,j,k,u,v,sum=0,n,m;
float cost[10][10];

void prims()
{
    int x = 1, min;
    vt[x] = 1;
    vis[x] = 1;
    for (i = 1; i < n; i++)
    {
        j = x;
        min = 999;
        while (j > 0)
       {
            k = vt[j];
            for (m = 2; m <= n; m++)
            {
                if (cost[k][m] < min && vis[m] == 0)
                {
                    min = cost[k][m];
                    u = k;
                    v = m;
                }
            }
            j--;
        }
        vt[++x] = v;
        edge[i][1] = u;
        edge[i][2] = v;
        e++;
        vis[v] = 1;
        sum = sum + cost[u][v];
    }
}

int main()
{
 printf("Enter the No: of vertices :");
    scanf("%d",&n);
    printf("Enter the Cost of adjacency matrix :\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%f", &cost[i][j]);
        }
    }
    prims();
    printf("Minimum Spanning Tree :\n");
    for (i = 0; i < e; i++)
    {
        printf("%d -> %d\n", edge[i][1], edge[i][2]);
    }
    printf("Total Cost = %d\n", sum);
    return 0;
}
