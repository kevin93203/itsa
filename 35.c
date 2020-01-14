#include<stdio.h>
int main()
{
    int a;
    int b;
    while(scanf("%d",&a)!=EOF)
    {
        int b=0;
        if(a%4==0)
        {
            b=1;
            if(a%100==0)
            {
                b=0;
                if(a%400==0)
                {
                    b=1;
                }
            }
        }
        if(b==1){printf("Bissextile Year\n");}
        else printf("Common Year\n");
    }
}
