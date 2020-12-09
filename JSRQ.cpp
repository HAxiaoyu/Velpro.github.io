#include<bits/stdc++.h>
using namespace std;

int f(int x)
{
	if(x%4==0&&x%100!=0||x%400==0) return 1;
	return 0;
}

int main()
{
	int n,y;
	scanf("%d %d",&n,&y);
	if(f(n)&&y==2) printf("29");
	if(!f(n)&&y==2) printf("28"); 
	if(y==1||y==3||y==5||y==7||y==8||y==10||y==12) printf("31");
	if(y==4||y==6||y==9||y==11) printf("30");
	return 0;
}
