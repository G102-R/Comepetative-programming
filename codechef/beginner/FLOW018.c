#include<stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,a=1;
		scanf("%d",&n);
		if(n<=20){
			for(int i=1;i<=n;i++)
			{
				a = a*i; 	
			}
			printf("%d\n",a);
			}
	}
}