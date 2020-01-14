#include<stdio.h>
int main()
{
    double a;
    double cost;
    while(scanf("%lf",&a)!=EOF)
    {
        cost=a*0.9;
        if (a > 800 && a < 1500)
			cost *= 0.9;
		if (a > 1499)
			cost *= 0.79;
		printf("%.1f\n", cost);
    }
}
