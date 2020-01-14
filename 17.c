#include<stdio.h>
int gcd(int x, int y) {
int tmp;
while (x % y != 0) {
tmp = y;
y = x % y;
x = tmp;
}
return y;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d\n",gcd(a,b));
    }
}
