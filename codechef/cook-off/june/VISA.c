#include<stdio.h>
#include<stdlib.h>

//1,900≤y1,y2≤2,100
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x1, x2, y1, y2, z1 ,z2;
        scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
        if(x1>=20&&x1<=50 && x2>=20&&x2<=50&&x1==x2&&y1==y2&&z1==z2&&z1>=1&&z2>=1&&z1<=6&&z2<=6&&y1>=1900&&y2>=1900 &&y1<=2100&&y2<=2100)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
}