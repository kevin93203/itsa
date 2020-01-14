#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int c=0;
        for(int i=1;i<=a;i++)
        {
         if(i%5==0 && i%7==0)
         {
            if(c==0){
             printf("%d",i);
             c++;
            }
            else
            printf(" %d",i);
         }
        }
        printf("\n");
    }
}
