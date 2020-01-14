#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int sum=0;
        for(int i=1;i<=a;i++)
        {
            sum+=i;
            if(i==1) printf("%d ",i);
            else printf("+ %d ",i);
        }
        printf("= %d\n",sum);
    }
}
