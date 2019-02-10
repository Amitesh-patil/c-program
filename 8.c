#include<stdio.h>
int main()
{
    int a[10],n,b,i,sum=1;
    scanf("%d",&b);
    scanf("%d",&n);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;a[i]<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
