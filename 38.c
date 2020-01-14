#include<stdio.h>
int main()
{
    int a[3];
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])!=EOF)
    {
        int min;
        int temp;
        for(int i=0;i<3-1;i++)
        {
            min=i;
            for(int j=i+1;j<3;j++)
            {
                if(a[min]>a[j]) min=j;
            }
            if(min!=i)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
        if(a[0]+a[1]>a[2]) printf("fit\n");
        else printf("unfit\n");
    }
}
