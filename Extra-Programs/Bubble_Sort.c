#include<stdio.h>
#include <stdlib.h>
#include <time.h>
clock_t start, end;
double cpu_time;

void improved_bubble(int arr[], int n)
{
    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    printf("\nThe Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void bubble_sort(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int i,n,c,d,k,flag=1,choice,arr[10000];
    srand(time(0));
    while(flag==1)
    {
        printf("\n1:Improved Bubble Sort\n2:Bubble Sort\n3:Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter the number of elements in array\n");
            scanf("%d", &n);
            printf("Elements of the array are:\n");
            for (i= 0; i<n; i++)
            {
               arr[i]=rand()%100;
               printf("%d ",arr[i]);
            }
            start = clock();
            improved_bubble(arr,n);
            end = clock();
            cpu_time = (double)(end - start) / CLOCKS_PER_SEC;
            printf("\nExecution time for the Improved bubble sort is : %f ms\n", cpu_time*1000);
            break;
            case 2:
            printf("Enter the No: of elements in array :\n");
            scanf("%d", &n);
            printf("\nArray elements are:\n");
            for (i= 0; i<n; i++)
            {
               arr[i]=rand()%1000;
               printf("%d ",arr[i]);
            }
            start = clock();
            bubble_sort(arr,n);
            end = clock();
            cpu_time = (double)(end - start) / CLOCKS_PER_SEC;
            printf("\nExecution time for Bubble Sort is : %f ms\n", cpu_time*1000);
            break;
            default:flag=0;
        }
    }
    return 0;
}
