#include<stdio.h>
int main()
{   int i=2,b,n=24;
while(i<=n)
{
    b=n;
    if (b%i==0)
    {
        printf("%d",i);
        b=b/i;
    }
    else
    {i++;
    b=b/(i-1);
}
}


}
