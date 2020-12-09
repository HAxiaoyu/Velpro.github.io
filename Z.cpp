#include<bits/stdc++.h>
using namespace std;

int a[101][101];

int main()
{
    int n, x, y;
 
    // 输入数据
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
 
    // 输出左上三角
    x = 0;
    y = 0;
    for(int i=0; i<n; i++)
        if(i%2==1)
		{
            for(int j=0; j<i; j++)
                cout << a[x++][y--] << " ";
            cout << a[x++][y] << " ";
        }
		else
		{
            for(int j=0; j<i; j++)
                cout << a[x--][y++] << " ";
            cout<< a[x][y++] << " ";
        }
 
    // 输出右下三角
    if(n%2==1)
        y--, x++;
    else
        y++, x--;
    for(int i=n-2; i>0; i--)
        if(i%2==1)
		{
            for(int j=0; j<i; j++)
                cout << a[x++][y--] << " ";
            cout << a[x][y++] << " ";
        }
		else
		{
            for(int j=0; j<i; j++)
                cout << a[x--][y++] << " ";
            cout << a[x++][y] << " ";
        }
    if(n!=1)
        cout << a[n-1][n-1] << endl;
    return 0;
}
