#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int  n,sum=0,count0=0; 
        scanf("%d",&n);
        int A[n];
        for(int i=0;i<n;i++)
        {
            if(i==0||i==1)
            {
                scanf("%d",&A[i]);
                
            }
        }
        for(int j=0;j<n;j++)
        {
            if(A[j]==1){
                sum = sum+A[j];
                }
                 if(A[j]==0)
                {
                    count0++;
                    break;
                }
        }
        if(sum<count0){printf("%d\n",sum);}     
        else{printf("%d\n",count0);}
    }
    return 0 ;
}