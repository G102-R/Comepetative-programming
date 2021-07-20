#include<stdio.h>
#define ZERO 0 
#define ONE 1 
#define MINUS1 -1

int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x;
        scanf("%d",&x);
        int a  = x%10;
        if(a%10==0)
        {
            printf("0\n");
        }
        else if(a%5==0)
        {
            printf("1\n");
        }
        else{
            printf("-1\n");
        }
    }
}