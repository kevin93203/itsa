#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int count=0;
        for(int i=1;i<=a;i++)
        {
            int sum=0;
            for(int j=1;j<i-1;j++)
            {
                if(i%j==0)
                {
                    sum+=j;
                }
            }
            if(sum==i){
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
