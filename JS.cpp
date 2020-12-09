#include<bits/stdc++.h>
using namespace std;

int cal(int x,int y,char z)
{
	switch(z)
	{
		case '+':printf("%d%c%d=%d",x,z,y,x+y);break;
		case '-':printf("%d%c%d=%d",x,z,y,x-y);break;
		case '*':printf("%d%c%d=%d",x,z,y,x*y);break;
		case '%':printf("%d%c%d=%d",x,z,y,x%y);break;
		case '/':printf("%d%c%d=%d",x,z,y,x/y);break;
	}
}

int main()
{
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	cal(a,b,c);
	return 0;
}
