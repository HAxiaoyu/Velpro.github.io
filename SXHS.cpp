#include<bits/stdc++.h>
using namespace std;

int function(int a,int b)
{
	int sum=0; //����λ����n���ݺ� 
	int ans=0; //ˮ�ɻ����� 
	int x=0; //��λ�� 
	if(a>b) swap(a,b);
	for(int i;i>a&&i<b;i++)
	{
		sum=0;
		x=0;
		int c=i,d=i;
		//����i�м�λ��
		while(i>0)
		{
			i/10;
			x++;
		}
		//��� 
		while(c>0)
		{
			c%10;
			sum+=pow(c,x);
			c/=10;
		}
		//�Ƚ� 
		if(d==sum) ans++;
		
	}
	printf("%d",ans); 
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	function(a,b);
	return 0;
} 
