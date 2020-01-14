#include<stdio.h>
int main()
{
    int i;
    while(scanf("%d",&i)!=EOF)
    {
        if(i>31)
        printf("Value of more than 31\n");
        else{
        int v;
        for(int j=0;j<=i;j++){
            if(j==0) v=1;
            else{
             v=v*2;
            }
        }
        printf("%d\n",v);
        }
    }
}
