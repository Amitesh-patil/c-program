#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("Alphabet",c);
    else
        printf("No",c);
        return 0;
}
