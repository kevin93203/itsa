#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        double v;
        if(a>=121){
            v=60*b+60*b*1.33+(a-120)*b*1.66;
        }
        else if(b>=61<=120){
            v=60*b+(a-60)*b*1.33;
        }
        else{
            v=a*b;
        }
        printf("%.1f\n",v);
    }
}
