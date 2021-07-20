#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,K;
        scanf("%d%d",&N,&K);
        int A[N],sum[33];
        for(int i=0;i<33;i++)
        {
            sum[i]=0;
        }
        for(int i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
        for(int i=0;i<N;i++)
        {
            int x = A[i];
            int j=32;
            while(x>0)
            {
                sum[j]=sum[j]+x%2;
                j--;
                x=x/2;
            }
        }
        int c=0;
        for(int j=0;j<33;j++)
        {
            if(sum[j]%K==0)
            {
                c=c+sum[j]/K;
            }
            else{
                c=c+1+sum[j]/K;
            }
        }
        printf("%d\n",c);
    } 
    return 0 ;
}
