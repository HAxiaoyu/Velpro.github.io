#include<bits/stdc++.h>
using namespace std;

int function(int a,int b)
{
	int sum=0; //各个位数的n次幂和 
	int ans=0; //水仙花个数 
	int x=0; //求位数 
	if(a>b) swap(a,b);
	for(int i;i>a&&i<b;i++)
	{
		sum=0;
		x=0;
		int c=i,d=i;
		//计算i有几位数
		while(i>0)
		{
			i/10;
			x++;
		}
		//求和 
		while(c>0)
		{
			c%10;
			sum+=pow(c,x);
			c/=10;
		}
		//比较 
		if(d==sum) ans++;
		
	}
	printf("%d",ans); 
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	function(a,b);
	return 0;
} 
