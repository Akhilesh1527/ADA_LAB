#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void mergesort(int [],int,int);
void merge(int [],int,int,int);

int main()
{
    int i,n;
    int c,d;
    srand(time(0));
    printf("Enter the No: of elements :");
    scanf("%d",&n);
    int a[n];
    printf("Array elements :\n");
    for(i=0;i<n;i++)
    {
       a[i]=rand()%1000;
       printf("%d\t",a[i]);
    }
    mergesort(a,0,n-1);
    printf("\nSorted array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    clock_t t; 
	double cpu_time;
	t=clock();
	for (c = 1; c <= 5000; c++) for (d = 1; d <= 5000; d++) { }
    t = clock() - t; 
	cpu_time=((double)t)/CLOCKS_PER_SEC; 
    printf("\nTime taken :%f sec\n", cpu_time);
   return 0;
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i,j,k,c[100];
    i=low;
    k=low;
    j=mid+1;
    while(i<=mid && j<=high)
    {
        if (a[i]<a[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        c[k++]=a[i++];
    }
    while(j<=high)
    {
        c[k++]=a[j++];
    }
    for(i=low;i<=high;i++)
    {
        a[i]=c[i];
    }
}
