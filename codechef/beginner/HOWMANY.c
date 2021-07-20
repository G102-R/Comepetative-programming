#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp = n,count=0;
    while(temp!=0)
    {
        temp/=10;
        count++;
    }
    if(count==1)
    {
        printf("1\n");
    }
    else if(count==2)
    {
        printf("2\n");
    }
    else if(count==3)
    {
        printf("3\n");
    }
    else{
        printf("More than 3 digits\n");
    }


   return 0; 
}
