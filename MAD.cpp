#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;

	cin>>m>>n;
		int a[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}//输入矩阵 
		
	 
	int row_min,row_min_col,col_max,row_min_row,flag=0;
	int i,j,k;
	for(i=0;i<m;i++){
		row_min = a[i][0]; 
		row_min_row = i;
		row_min_col = 0;
		for(j=0;j<n;j++){
			if(row_min > a[i][j]){
					row_min = a[i][j];  // i = 0 1 2 3    //找到行最小 
				 	row_min_col =  j;    //行最小的所在列 
				 	row_min_row = i;
			}
		}
	col_max = a[0][row_min_col]; 	
	for(k=1;k<m;k++){  
		if(col_max < a[k][row_min_col]){
			col_max = a[k][row_min_col];
		}
		
	}
	if(col_max == row_min){
		cout<<row_min_row<<" "<<row_min_col<<" "<<row_min<<endl;
		flag = 1;
	}

}  //大循环结束  
	if(!flag)
		cout<<"no"<<endl;
	return 0;
	
}
