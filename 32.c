#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int sum=0;
        int b=a;
        for(int i=0;i<3;i++)
        {
            sum+=(b%10)*(b%10)*(b%10);
            b=b/10;
        }
        if(sum==a){printf("Yes\n");}
        else printf("No\n");
    }
}
