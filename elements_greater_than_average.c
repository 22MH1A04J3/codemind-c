#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,avg=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //printf("%d",a[i]);
        //sum=sum+a[i];
        //avg=sum/n;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
        }
    