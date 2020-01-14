#include<stdio.h>
int main(){
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int b[8];
        if(a>0) b[0]=0;
        else{
            b[0]=1;
            a+=128;
        }
        for(int i = 0;i < 7; i++) {
			b[7 - i] = a % 2;
			a /= 2;
		}
		for(int i = 0; i < 8; i++){
            printf("%d",b[i]);
		}
		printf("\n");
    }
}
