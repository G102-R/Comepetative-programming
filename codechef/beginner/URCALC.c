#include<stdio.h>

int main(void)
{
    int a,b,sum;
    float div,mul;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    if(c=='+')
    {
        sum = a+b;
        printf("%d\n",sum);
    }
    else if(c=='-')
    {
        sum = a-b;
        printf("%d\n",sum);
    }
    else if(c=='*')
    {
        mul = (float)(a*b);
        printf("%f\n",mul);
    }
    else if (c=='/')
    {
        div = (float)(a/b);
        printf("%f\n",div);
    }
    else{
        return 0 ;
    }
}