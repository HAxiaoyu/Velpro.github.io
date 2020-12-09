#include<stdio.h>

double function(int n)
{
	if(n==1) return 1;
	return 1.0/(1+function(n-1));
}

int main()
{
	int n;
	scanf("%d",&n);
	double ans=function(n);
	printf("%.6lf",ans);
	return 0;
}
