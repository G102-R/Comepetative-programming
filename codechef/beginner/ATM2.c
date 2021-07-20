#include<stdio.h>
#define ONE 1
#define ZERO 0 
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int A[n],rem=k,sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            if(A[i]<=rem)
            {
                rem-=A[i];
                printf("%d",ONE);
               
            } 
            else
            {
                printf("%d",ZERO);
            }
        }

    }

}