#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float area,s;
    s=(a+b+c)/2.0;
    area=s*(s-a)*(s-b)*(s-c);
    printf("%.2f",sqrt(area));
}