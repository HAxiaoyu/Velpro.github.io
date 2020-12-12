#include<bits/stdc++.h>
using namespace std;

int a[1001][1001]={0};

int main()
{
	int n,i=0,j=0,k;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
	for(i=0;i<101;i++)
		for(j=0;j<101;j++){	
			for (k=0;k<n;k++)
				if (j>=a[k][0] && j<a[k][2] && i>=a[k][1] && i<a[k][3])
					break;
			if (k<n)
				count++; 
		}
	cout << count << endl;
	return 0;
}
