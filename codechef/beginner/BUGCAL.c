#include<stdio.h>
#include<math.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,sum=0,tempa,tempb,i=0;
       scanf("%d%d",&a,&b);
       while(a!=0||b!=0){
           tempa = a%10;
           tempb = b%10;
           sum = sum+(tempa+tempb)%10*pow(10,i);
           a/=10;
           b/=10;
           i++;
       }
       printf("%d\n",sum);
    }
}