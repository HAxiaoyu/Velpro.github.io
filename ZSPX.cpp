#include<stdio.h>
int main()
{
	int n;
	int i,j,temp,count;
	
	scanf("%d",&n);
	int array[n];
	int result[n][2];
	
	
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	for(i=1;i<n;i++){
		for(j=i;j>0&&array[j]<array[j-1];j--){
			temp=array[j];
			array[j]=array[j-1];
			array[j-1]=temp;
		}
	}
	
	result[0][0]=array[0];
	result[0][1]=1;
	count=0; 
	for(i=1;i<n;i++){
		if(array[i]==result[count][0]){
			result[count][1]++;
		}else{
			count++;
			result[count][0]=array[i];
			result[count][1]=1;
		}
	}
	
	for(i=1;i<=count;i++){
		for(j=i;j>0&&result[j][1]>result[j-1][1];j--){
			temp=result[j][0];
			result[j][0]=result[j-1][0];
			result[j-1][0]=temp;
			
			temp=result[j][1];
			result[j][1]=result[j-1][1];
			result[j-1][1]=temp;
		}
	} 
	
	for(i=0;i<=count;i++){
		printf("%d:%d\n",result[i][0],result[i][1]);
	} 
	return 0;
}
