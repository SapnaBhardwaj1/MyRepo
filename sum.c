#include<stdio.h>

int main() {
    int a,b,c,d;
    if (0<=a<=1000 && 0<=b<=1000 && 0<=c<=1000)
    {
        printf("enter three numbers a,b,c between 1 and 1000 whose sum is to be calculated\n");
        scanf("%d %d %d",&a,&b,&c);
        d=a+b+c;
        printf("required sum =%d",d);
    }
    else
    {
       printf("invalid number");
        main();
    }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}