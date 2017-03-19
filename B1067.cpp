#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char rp[21];
	int count;
	scanf("%s",rp);
	scanf("%d",&count);/*不要用gets(rp),无法识别空格*/
	getchar();
	char tp[21];
	int num=0;
	while(gets(tp))
	{
	num++;
	if(num<=count)
	{
	if(strcmp(tp,"#")==0) 
	break;
	else 
	{
	if(strcmp(tp,rp)==0)
	{
	printf("Welcome in\n");
	break;	
	}
	else
	{
	printf("Wrong password: %s\n",tp);
	if(num==count)
	{
	printf("Account locked\n");
	break;
	} 
	}	
	}
	}
	}
	return 0;
}/*字符串处理+逻辑判断*/