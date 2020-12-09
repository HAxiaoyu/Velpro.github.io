#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,i,j,s=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
        s=0;
        for(j=1;j<=i/2;j++ )
        {
            if(i%j == 0)
            s += j;
        }
        if(s==i)
          printf("%d\n",i);
	}
	return 0;
}
