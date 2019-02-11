#include<stdio.h>
int main()
{
 int i,j,n,num[10],a;
 scanf("%d",&n);
 for(i=0;i<n;++i)
 {
  scanf("%d",&num[i]);
 }
 for(i=0;i<n;++i)
 {
  for(j=i+1;j<n;++j)
   {
     if(num[i]>num[j])
       {
         a=num[i];
         num[i]=num[j];
         num[j]=a;
        }
    }
 }
 for(i=0;i<n;++i)
 {
 printf("%d",num[i]);
 }
return 0;
}
