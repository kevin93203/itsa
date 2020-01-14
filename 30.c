#include<stdio.h>
int main()
{
    int a;
    int mark;
    while(scanf("%d",&a)!=EOF)
    {
        mark=0;
        for(int i=a-1; i>1; i--)
        {
            if(a%i==0)
            {
                mark=1;
                printf("NO\n");
                break;
            }

        }
        if(mark==0)
            printf("YES\n");
    }
}
