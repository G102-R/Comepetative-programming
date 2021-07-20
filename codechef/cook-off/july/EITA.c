#include<stdio.h>
#include<stdlib.h>


int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int d,x,y,z,a1,a2;
        scanf("%d%d%d%d",&d,&x,&y,&z);
        if(d>=1&&d<7&&z>=1&&z<x&&x<y&&y<=18)
        {
            a1 = x*7;
            a2 = (y*d)+(z*(7-d));
            if(a1>=a2)
            {
                printf("%d\n",a1);
            }
            if(a1<a2)
            {
                printf("%d\n",a2);
            }

        }
        
    }

}