#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int count=0;
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                if(count==0)
                {
                    printf("%d",i);
                    count++;
                }
                else
                printf(" %d",i);
            }
        }
        printf("\n");

    }
}
