#include<iostream>
#include<string.h>
using namespace std;
struct sel
{
 char name[21];
 bool pick;
}sels[1001];
int main()
{
	int M,N,S;
	scanf("%d %d %d",&M,&N,&S);
	getchar();
	int num=0;
	bool pickif=false;
	for(int i=0;i<M;i++)
	{
	gets(sels[i].name);
	sels[i].pick=false;
	} 
	int i=S-1;
	while(i<M)
	{
	if(sels[i].pick==true)
	{
	i++;
	}
	else
	{
	pickif=true;	
    printf("%s\n",sels[i].name);
	sels[i].pick==true;
	for(int j=0;j<M;j++)
	{
	if(strcmp(sels[i].name,sels[j].name)==0)
	{
	sels[j].pick=true;	
	}
	}
	i+=N;
	}
	}
	if(M<S)
	{
	printf("Keep going...\n");
	}
	return 0;
}
/*不用Map的话，还是有点麻烦的。判断"Keep going.."一开始用的是bool,会报错*/