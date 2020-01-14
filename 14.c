#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int days;
        int hours;
        int minutes;
        int seconds;
        days=a/(60*60*24);
        a=a%(60*60*24);
        hours=a/(60*60);
        a=a%(60*60);
        minutes=a/60;
        a=a%60;
        seconds=a;
        printf("%d days\n",days);
        printf("%d hours\n",hours);
        printf("%d minutes\n",minutes);
        printf("%d seconds\n",seconds);
    }
}
