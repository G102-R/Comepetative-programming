#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,count=0,count0=0;
        scanf("%d",&n);
        int A[n];
        if(n>=7&&n<=15){
        for(int i=0;i<=n;i++)
        {
            scanf("%d",&A[i]);
           
        }
        }
        for(int i=0;i<n;i++)
        {
             if(A[i]==0||A[i]==1||A[i]==2||A[i]==3||A[i]==4||A[i]==5||A[i]==6||A[i]==7)
            {
            count++;
            }
            else{
                count0++;
            }
        }
        if(count==7)
        {
            printf("%d\n",count);
        }
        if(count>7)
        {
            printf("%d\n",count0);
        }
    }


}