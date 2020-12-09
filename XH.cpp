#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[1000],b[1000],i,j,tmp1,tmp2,add[1000];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		b[i]=a[i];
		
	for(i=0;i<n;i++) add[i]=0;
	
	for(i=0;i<n;i++)
	{
		while(a[i]>=10)
		{
			add[i]+=a[i]%10;
			a[i]=a[i]/10;
		}
		add[i]+=a[i];
	}
	
	
	for(i=0;i<n-1;i++)
	{
        for(j=0;j<n-i-1;j++)
		{
            if(add[j]<add[j+1])
			{
                tmp1 = add[j];
                add[j] = add[j+1];
                add[j+1] = tmp1;
                tmp2 = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp2;
            }
            
        }
    }
     for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(add[j]==add[j+1]&&b[j]>b[j+1])
    		{
    			tmp2=b[j];
                b[j]=b[j+1];
                b[j+1]=tmp2;
			}
		}
	}
   
    
    
   	printf("%d",b[1]);
	return 0; 
}
