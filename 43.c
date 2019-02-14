#include<stdio.h>
int main()
{
    char a[20],b[10];
    scanf("%s %s",&a,&b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}
