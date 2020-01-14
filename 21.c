#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        unsigned long long v=1;
        for(int i=1;i<=a;i++){
            v=v*i;
        }
        printf("%llu\n",v);
    }
}
