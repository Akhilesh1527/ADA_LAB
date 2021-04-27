#include <stdio.h>
#include <stdlib.h>
int iterative(int a, int b)       
{
int x,y;
while (b > 0)
{
x=a/b;
y=a-x*b;
a=b;
b=y;
}
return a;
}
int recursive(int a, int b)       
{
if (b == 0)
return a;
int p=a/b;
int q=a-p*b;
return recursive(b,q);
}
int main()
{
int a,b,choice;
printf("Enter the two Positive numbers : \n");
scanf("%d %d",&a,&b);
for(;;)
{
 printf("\n1.Iterative_Gcd\n2.Recursive_Gcd\n3.Exit\n");
 printf("Enter your choice:\n");
 scanf("%d",&choice);
 switch(choice)
 {
    case 1:printf("Gcd of the two numbers is : %d\n",iterative(a,b));
            break;
    case 2:printf("Gcd of the two numbers is : %d\n",recursive(a,b));
            break;
    default:exit(0);
 }
} 
return 0;
}
