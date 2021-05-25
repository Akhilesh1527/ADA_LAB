#include <stdio.h>
 
int main()
{
int i,j,k,n,a[10][10],indegree[10],flag[10],count=0;
 
printf("Enter the No: of Vertices:\n");
scanf("%d",&n);
 
printf("Enter the Adjacency Matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
 
for(i=0;i<n;i++){
        indegree[i]=0;
        flag[i]=0;
    }
 
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            indegree[i]=indegree[i]+a[j][i];
 
    printf("\nThe topological order is:");
 
    while(count<n){
        for(k=0;k<n;k++){
            if((indegree[k]==0) && (flag[k]==0)){
                printf("%d ",(k+1));
                flag [k]=1;
            }
 
            for(i=0;i<n;i++){
                if(a[i][k]==1)
                    indegree[k]--;
            }
        }
 
        count++;
    }
 
    return 0;
}
