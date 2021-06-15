#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void quick_sort(int [] ,int,int);
int partition(int [] ,int,int);

int main()
{
    int n,i;
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
    
    quick_sort(a,0,n-1);
    printf("\nSorted Elements :\n");
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
void quick_sort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=partition(a,low,high);
        quick_sort(a,low,mid-1);
        quick_sort(a,mid+1,high);
    }
}

int partition(int a[],int low,int high)
{
    int i,j,temp,pivot;
    pivot=a[low];
    i=low+1;
    j=high;
    while(i<=j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
