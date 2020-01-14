#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(abs(a)<=100&&abs(b)<=100)
        printf("inside\n");
        else
        printf("outside\n");
    }
}
