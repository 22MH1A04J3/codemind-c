#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else
        {
            sum=sum+a[i];
        }
    }
    int d,c;
    if(s>sum)
    {
        d=s-sum;
        printf("%d",d);
    }
    else
    {
        c=sum-s;
        printf("%d",c);
    }
    }
    