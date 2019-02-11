#include<stdio.h>
int main()
{
    int a,n,t,s;
    scanf("%d %d %d",&n,&a,&t);
    s=(((2*a)+t*(n-1))*n)/2;
    printf("%d",s);
    return 0;
}
