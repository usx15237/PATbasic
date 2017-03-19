#include<iostream>
#include<cmath>
using namespace std;
int col[1001][1001],Hash[20000000]={0};
int main()
{
	int M,N,TOL,num=0,x,y,val;
	scanf("%d %d %d",&M,&N,&TOL);
	for(int i=0;i<N;i++)
	{
    for(int j=0;j<M;j++)
    {
 	scanf("%d",&col[i][j]);
 	Hash[col[i][j]]++;
    }
	}  
	for(int i=0;i<N;i++)
	{
    for(int j=0;j<M;j++)
    {
 	if(Hash[col[i][j]]==1&&abs(col[i-1][j]-col[i][j])>TOL&&abs(col[i+1][j]-col[i][j])>TOL&&abs(col[i][j+1]-col[i][j])>TOL&&abs(col[i][j-1]-col[i][j])>TOL&&abs(col[i-1][j-1]-col[i][j])>TOL&&abs(col[i+1][j-1]-col[i][j])>TOL&&abs(col[i-1][j+1]-col[i][j])>TOL&&abs(col[i+1][j+1]-col[i][j])>TOL)
 	{
    val=col[i][j];
    x=j;
    y=i;
 	num++;
 	}
    }
	}
	if(num==0)
	printf("Not Exist\n");
	else if(num==1)
	printf("(%d, %d): %d\n",x+1,y+1,val);
	else
	printf("Not Unique");
	return 0;
}
/*逻辑模拟,考察对题意的理解,
"独一无二"说明要设立Hash[]判断各个颜色值是否只出现一次.
"色差"指的是绝对值
比较坑的是题目说的是"周遭八点",但是遍历时必须考虑i=0,i=M的情况，不然测试点3和5会报错*/ 
