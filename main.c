#include <stdio.h>
#include <stdlib.h>
# define N 100
# define M 100
# define T 100
int intersection(int A[],int B[],int C[]);
int A[N],i,j,B[M],C[T];
int main ()
{int n,m;
// array A
printf("enter the size of Array A: \n");
scanf("%d",&n);
printf("enter nonzero-elements of array A (separate by space)and if finish enter 0:\n");
for (i=0; i<(n+1);i++)
{scanf("%d",&A[i]);
if(A[i]==0)
break;}
printf("the array A is:\n");
  for (int k=0; k<(n+1); k++)
     printf("%4d", A[k]);
// array B
printf("\n enter the size of Array B: \n");
scanf("%d",&m);
printf("enter nonzero-elements of array B (separate by space)and if finish enter 0:\n");
for (j=0; j<(m+1);j++)
{scanf("%d",&B[j]);
if(B[j]==0)
break;}
printf("the array B is:\n");
  for(int k=0; k<(m+1); k++)
     printf("%4d", B[k]);
intersection (A,B,C);
printf("\n Eshterak A and B is :\n");
for(i=0; C[i]!=0; i++)
    {printf("%4d",C[i]);}
  printf("    0");
    return 0;}
//************
   int intersection (int A[],int B[],int C[])
     {int i=0,j=0,k=0;
       while (A[j]!=0 && B[j]!=0)
       {if(A[j]<B[j])
       {j++;}
       else
       if(A[j]>B[j])
       {i++;}
       else
       {if(k==0||C[k-1] !=A[j])
       {C[k++]=A[j];}
       j++;
       i++;}}
       C[k]=0;}
