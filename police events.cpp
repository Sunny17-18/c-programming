#include<stdio.h>
#include<conio.h>
int main()
{
	int n,event[20],p=0,res=0,i;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		{
			scanf("%d",&event[i]);
		}
	for(int i=0;i<n;i++)
	{
		if(i>0)
		{
			p+=event[i];
		}
		else
		{
			if(p>0)
			{
				p-=1;
			}
			else
			{
				res+=1;
			}
	    }
    }
    printf("%d",res);
    
    
}
