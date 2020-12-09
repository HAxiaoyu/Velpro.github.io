#include<stdio.h>
int main(void){
	int day,index,num,flag,i,weihao;
	int array1[5][2]={{1,6},
					{2,7},
					{3,8},
					{4,9},
					{5,0}
	};
	int array2[2][5]={{0,2,4,6,8},
					{1,3,5,7,9}
	};
	scanf("%d%d%d",&day,&index,&num);
	flag=0;
	weihao=num%10;
	if(index>=200&&index<400){
		for(i=0;i<2;i++){
			if(array1[day-1][i]==weihao){
				flag=1;
				break;
			}
		} 
	}else if(index>=400){
		for(i=0;i<5;i++){
			if(array2[day%2][i]==weihao){
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		printf("%d no",weihao);
	}else if(flag==1){
		printf("%d yes",weihao);
	}
	return 0;
}
