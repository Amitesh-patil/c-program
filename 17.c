#include <stdio.h>
int main()
{
    int num, o, rem, res = 0;
    scanf("%d", &num);
    o = num;
    while (o != 0)
    {
        rem = o%10;
        res += rem*rem*rem;
        o /= 10;
    }

    if(res == num)
        printf("yes");
    else
        printf("no");
    return 0;
}
