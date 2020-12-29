#include<bits/stdc++.h>
using namespace std;

char len(char *s)
{
	int n=0;
	while(*s++)
	{
		++n;
	}
	printf("%d",n);
}

int main()
{
	char s[1001];
	gets(s);
	len(s);
	return 0;
}
