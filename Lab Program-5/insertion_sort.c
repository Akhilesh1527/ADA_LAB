#include <stdio.h>
#include <process.h>
#include <time.h>
#include <stdlib.h>

void insertion_Sort(int a[],int n)
{
 int i,j;
 int y;
for (i=1;i<n;i++)
{
 y=a[i];
 j=i-1;
while(j>=0&&a[j]>y)
{
 a[j+1]=a[j];
 j=j-1;
}
a[j+1]=y;
}
printf("\nSorted Array :\n ");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
}

int main()
{
	int n,i;
	int c,d;
	srand(time(0));
	printf("Enter the No: of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1000;
	}
	printf("\nThe Array elements are :\n");
	for(i=0;i<n;i++)
	{
	  printf("%d\t",a[i]);
	}  
	clock_t t; 
	double cpu_time;
	t=clock();
	insertion_Sort(a,n); 
	for (c = 1; c <= 5000; c++) for (d = 1; d <= 5000; d++) { }
    	t = clock() - t; 
	cpu_time=((double)t)/CLOCKS_PER_SEC; 
    printf("\nTime taken :%f sec\n", cpu_time); 
    return 0;
}    
