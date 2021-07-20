#include<stdio.h>

int gcd(int a,int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int lcm(int a,int b)
{
    int lcm;
    lcm = abs(a*b)/gcd(a,b);
    return lcm;
}
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int b1,a1;
        //lcm(a,b)= |a*b|/gcd(a,b);
        a1 = gcd(a,b);
        b1 = gcd(a,b);
        printf("%d\n",a1);
        printf("%d\n",b1);
    }
    return 0;
}