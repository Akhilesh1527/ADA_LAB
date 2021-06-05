#include <stdio.h>
#include <conio.h>

int j,i,count=0;
int p[100], pi[100];     
int dir[100];     

void PrintPerm()
{
   int i;
   
   count = count + 1;
   printf( "\n[%d]", count );
   for (i=1; i<=j; ++i)
   {
      printf( "%d", p[i] );
   }
       
   
}
void Move( int x, int d )
{
   int z;
   z=p[pi[x]+d];
   p[pi[x]] = z;
   p[pi[x]+d] = x;
   pi[z] = pi[x];
   pi[x] = pi[x]+d;
} 



void Perm ( int n )
{
   int i;
   if (n>j)
      PrintPerm();
   else
   {
      Perm(n+1);
      for (i=1; i<=n-1; ++i)
      {
         Move(n,dir[n]);
         Perm(n+1);
      }
      dir[n] = -dir[n];
   } 
} 

int main ()
{
   printf( "Enter the value of n:" );
   scanf( "%d",&j );
   for (i=1; i<=j; ++i)
   {
      dir[i] = -1; p[i] = i;
      pi[i] = i;
   }
   Perm (1);
   printf( "\n" );
  
   return 0;
} 

