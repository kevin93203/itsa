#include<stdio.h>
int main()
{
    int a;
    int mark;
    while(scanf("%d",&a)!=EOF)
    {
        for(int i=a-1; i>1; i--)
        {
            mark=0;
            for(int j=i-1; j>1; j--)
            {
                if(i%j==0)
                {
                    mark=1;
                    break;
                }
            }
            if(mark==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}
