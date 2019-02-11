#include<stdio.h>
int main()
{
    int n,i,j,a[10],temp,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
    s=(i+1)/2;
    printf("%d",s);
    return 0;
    
}
