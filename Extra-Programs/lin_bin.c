#include<stdio.h>
#include<stdlib.h>

void linear_search()
{
    int arr[20],search;
    int pos,i;
    int count=0;
    for(i=0;i<20;i++)
    {
        arr[i]=rand()%100;
    }
    printf("The Elements Present in the Array are :\n");
    for(i=0;i<20;i++)
    {
      printf("%d ",arr[i]);  
    }

    printf("\nEnter the element to be searched:");
    scanf("%d",&search);
    for(i=0;i<20;i++)
    {
        if(arr[i]==search)
        {
            pos=i+1;
            count=1;
        }
    }
    if(count==0)
    {
        printf("Element not found!\n");
    }
    else
    {
        printf("Element is found at the position %d\n",pos);
    }

}
void binary_search()
{
    int arr[20];
    int i,j,key;
    int var;
    for(i=0;i<20;i++)
    {
        arr[i]=rand()%50;
    }
    for(i=0;i<20;i++)
    {
        
        var=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>var)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=var;
        
    }
    printf("The Final list is:\n");
    for(i=0;i<20;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to be searched:\n");
    scanf("%d",&key);
    int low=0,high=19,mid,count=0;
    while(low<=high&& count==0)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            count=1;
        }
        if(key>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(count==0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("The Element found at position %d\n",mid+1);
    }
}

int main()
{
    int choice;
    int count=1;
    while(count==1)
    {
		printf("\n1)Linear Seacrh\n2)Binary Search\n3)Exit\n");
        scanf("%d",&choice);
        switch(choice)
       {
		   
            case 1:linear_search();
                   break;
            case 2:binary_search();
                   break;
            case 3:count=0;
                   break;
            default:printf("Invalid choice!\n");
        }
    }
}
