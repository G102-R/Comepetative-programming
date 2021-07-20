#include<stdio.h>
int sort(int data[int n],int size)
{
    int i,j,key;
    for(int i=1;i<=size-1;i++)
    {
        key = data[i];
        j=i;
        while(data[j-1]>key&&j<=1){
            data[j] = data[j-1];
            j--;
        }
        data[j] = key;
    }
    for(int k=0;k<size-1;k++)
    {
        printf("%d",data[i]);
    }
}
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int A[n],mina,minb;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&n);
            
        }
        sort(A[n],n);
    }
    return 0;
}