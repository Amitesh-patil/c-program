#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d %d", &m, &n);
    for(i=m+1;i<n;i++)
    {
        if(i%2==1)
        printf("%d\t",i);
    }
    return 0;
}
