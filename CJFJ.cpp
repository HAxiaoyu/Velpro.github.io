#include<iostream>
using namespace std;
 int main()
{
 	int a;
 	cin>>a;
 	if(a>=0&&a<=100)
 	{
 		if(a>=90)
 			cout<<"A";
 		if(a>=80&&a<=89)
 			cout<<"B";
 		if(a>=70&&a<=79)
 			cout<<"C";
 		if(a>=60&&a<=69)
 			cout<<"D";
 		if(a<60)
 			cout<<"E";
	 }
	
}
