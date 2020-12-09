#include<bits/stdc++.h>
using namespace std;

int main()
{
	float x,fee;
	scanf("%f",&x);
	if(x<=110)
	{
		fee=x*0.5;
	}
	if(110<x&&x<=210)
	{
		fee=110*0.5+(x-110)*0.55;
	}
	if(x>210)
	{
		fee=110*0.5+100*0.55+(x-210)*0.7;
	}
	printf("%.2f",fee);
	return 0;
}
