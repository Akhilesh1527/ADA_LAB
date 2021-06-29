#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include <time.h>

void heap_sort(int[],int);
void heap_cons(int[],int);
void heap_adj(int[],int);


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
 heap_sort(a,n);
 printf("\nSorted array:\n");
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

void heap_sort(int a[], int n)
{
 int i,temp;
 heap_cons(a,n);
 for(i=n-1;i>0;i--)
{
 temp=a[0];
 a[0]=a[i];
 a[i]=temp;
 heap_adj(a,i);
}
}

void heap_cons(int a[], int n)
{
 int i,j,k,item;
 for(k=1;k<n;k++)
{
 item=a[k];
 i=k;
 j=(i-1)/2;
 while(i>0 && item>a[j])
 {
  a[i]=a[j];
  i=j;
  j=(i-1)/2;
 }
 a[i]=item;
}
}

void heap_adj(int a[], int n)
{
 int i,j,item;
 j=0;
 item=a[j];
 i=2*j+1;
 while(i<=n-1)
{
 if(i+1<=n-1)
{
 if(a[i]<a[i+1])
 i++;
}
if(item<a[i])
{
 a[j]=a[i];
 j=i;
 i=2*j+1;
}
else
break;
}
a[j]=item;
}
