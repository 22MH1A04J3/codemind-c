#include<stdio.h>
int main()
{
    int i,m,n,l,g;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
if(m%i==0&&n%i==0)
g=i;
}
l=(m*n)/g;
printf("%d",l);
return 0;
}
