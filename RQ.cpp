#include<bits/stdc++.h>
using namespace std;

int f(int year)
{
	if(year%400==0||(year%4==0&&year%100!=0))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int y,d,flag;
	int i,mouth;
	int mouthdays[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},//不是闰月天数 0元素不使用 使月数与下标对应 
						{0,31,29,31,30,31,30,31,31,30,31,30,31}}; //闰月天数
	scanf("%d %d",&y,&d);
	//scanf("%d",&d);
	flag=f(y);
	mouth=1;
	while(d>mouthdays[flag][mouth]){
		d=d-mouthdays[flag][mouth];
		mouth++;
	}
	for(i=1;i<=mouthdays[flag][mouth];i++)
	{
		d--;
		if(d==0) break;
	}
	printf("%d %d",mouth,i);
	return 0;
} 

