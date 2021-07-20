#include<stdio.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,m,k,countm=0,countn=0;
        scanf("%d%d%d",&n,&m,&k);
        int A[m],B[k];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&A[i]);
        }
        for(int i=0;i<k;i++)
        {
            scanf("%d",&B[i]);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(A[i]==B[j])
                {
                    countm++;
                }
                if(A[i]!=B[j])
                {
                    countn++;
                }
            }
        }

        printf("%d %d\n",countm,countn);
    }
}