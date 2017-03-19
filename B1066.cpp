#include<iostream>
using namespace std;
int main()
{
   int M,N,A,B,D;
   scanf("%d %d %d %d %d",&M,&N,&A,&B,&D); 
   for(int i=0;i<M;i++)
   {
   	int temp; 
   for(int j=0;j<N;j++)
   {
   	scanf("%d",&temp);
   	if(temp>=A&&temp<=B)
	{
	    temp=D;	 	 
    } 
    printf("%03d",temp); 
    if(j<N-1)
    printf(" ");
   }
   printf("\n"); 
   }
   return 0;
} 
/*nc地写了temp=0;一定要仔细看题啊啊啊啊啊*/