#include<stdio.h>
int gcd(int a,int b){
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

int count(int a,int b)
{
    int sq = gcd(a,b);
    int rem  =(a*b)/(sq*sq);
    return rem;
}

int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d\n",count(n,m));
        }
        return 0;
}
