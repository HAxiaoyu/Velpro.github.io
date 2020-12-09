#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
	if(x>=100)
	{
		a=x/100;
	}
	if(50<=(x-a*100)<100)
	{
		b=(x-a*100)/50;
	}
	if(20<=(x-a*100-b*50)<50)
	{
		c=(x-a*100-b*50)/20;
	}
	if(10<=(x-a*100-b*50-c*20)<20)
	{
		d=(x-a*100-b*50-c*20)/10;
	}
	if(5<=(x-a*100-b*50-c*20-d*10)<10)
	{
		e=(x-a*100-b*50-c*20-d*10)/5;
	}
	if(1<=(x-a*100-b*50-c*20-d*10-e*5)<5)
	{
		f=(x-a*100-b*50-c*20-d*10-e*5);
	}
	printf("%d %d %d %d %d %d",a,b,c,d,e,f);
	return 0;
}
