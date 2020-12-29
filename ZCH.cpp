#include<bits/stdc++.h>
using namespace std;

char s[1001],s1[1001];

int main()
{
 	int n,max=0;
 	while(1)
 	{
        gets(s);
  		if(strcmp(s,"***end***")==0)
   			break;
  		n=strlen(s);
  		if(n>max)
  		{
            max=n;strcpy(s1,s);
  		}
	}
 	printf("%d\n%s",max,s1);
 	return 0;
}
