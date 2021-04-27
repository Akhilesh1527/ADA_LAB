#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <time.h>
void sort(int a[],int n)
{
	int i,j,temp,small;
	int pos;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			small=a[i];
			pos=i;
			if(a[j]<small)
			{
				small=a[j];
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				pos=j;
			}
		}
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
	t=clock();
	sort(a,n); 
	for (c = 1; c <= 5000; c++) for (d = 1; d <= 5000; d++) { }
    	t = clock() - t; 
	double time_taken = ((double)t)/CLOCKS_PER_SEC; 
    	printf("\nTime taken :%f\n", time_taken); 
    return 0;
}    

