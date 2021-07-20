#include<stdio.h>


int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a&&b&&c)>=1&&(a&&b&&c)<=10)
    {
        if(a==b==c||a==b||b==c||c==a)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        return 0;
    }
}

