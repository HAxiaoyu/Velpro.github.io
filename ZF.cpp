#include<stdio.h>
#include<math.h>
int main(){
   char n;
   while(scanf("%c",&n))
   {
	   if(n>='a'&&n<='z')
	   {
		   char m=n-32;
		   printf("%c\n",m);
	   }
	   if(n>='A'&&n<='Z')
	   {
		   char m=n+32;
		   printf("%c\n",m);
	   }
		   
   }
   return 0;
}
