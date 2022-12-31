#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    float avg,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    printf("%.2f",avg);
}