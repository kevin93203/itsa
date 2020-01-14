#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int ten;
        int five;
        int one;
        ten=a/10;
        a=a%10;
        five=a/5;
        a=a%5;
        one=a;
        printf("NT10=%d\n",ten);
        printf("NT5=%d\n",five);
        printf("NT1=%d\n",one);
    }
}
