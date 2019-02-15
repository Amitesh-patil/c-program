#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
    if(n==a[i])
    {
    c=1;
    break;
    }
    }
    if(c==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
