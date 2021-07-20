#include<stdio.h>
int main(void)
{
	int T,max;
	scanf("%d",&T);
	while(T--)
	{
		int n,i;
		int A[50],count=0;
		char s;
		for(int i =0;i<=50;i++){
			scanf("%d%c",&A[i],&s);
			count++;
			if(s=="\n")
			{
				break;
			}
		}
		n = count-1;
		for(int j=0;j<count;j++)
		{
			if(A[j]==n)
			{
					A[i]==0;
					break;
			}

		}
		max = A[0];
		for (int i=0;i<count;i++)
		{
			if(max<A[i])
			{
				max = A[i];

			}
		}
		printf("%d\n",max);
	}

}