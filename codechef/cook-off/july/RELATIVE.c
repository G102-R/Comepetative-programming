#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int g,c,h;
        scanf("%d%d",&g,&c);
        if(g>=1&&g<=10&&c>=1000&&c<=3000)
        {
            h=(c*c)/(2*g);
            printf("%d\n",h);
        }
    }
    
}