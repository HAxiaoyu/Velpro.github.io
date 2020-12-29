#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s[101]={0},str[101][101]={0};
	int flag,n;
	gets(s);
	scanf("%d",&flag);
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		gets(str[i]);
	if(flag==1)
	{
		for(int i=0;i<=n;i++)
		{
			char *ans=strstr(str[i],s);
			if(ans!=NULL) puts(str[i]);
		}
	}
	else
	{
		strlwr(s);
		for(int i=0;i<=n;i++)
		{
			strlwr(str[i]);
			char *ans=strstr(str[i],s);
			if(ans!=NULL) puts(str[i]);
		}
	}
	return 0;
}
