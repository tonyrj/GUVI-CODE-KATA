#include<stdio.h>
int main()
{
int a,m,r,s;
scanf("%d",&a);
m=a%10;
r=a/10;
s=(m*m)+(r*r);
printf("%d",s);
return 0;
}
