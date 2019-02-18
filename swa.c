#include<stdio.h>
#include<string.h>
int main()
{
char a[50],p; 
int len1,i;

scanf("%s",a);
len1=strlen(a);
if(len1%2==0)
{
for(i=0;i<len1;i+=2)
{
p=a[i];
a[i]=a[i+1];
a[i+1]=p;

}
printf("%s",a);
}
else
{
for(i=0;i<(len1-1);i+=2)
{
p=a[i];
a[i]=a[i+1];
a[i+1]=p;

}
printf("%s",a);
}
return 0;
}
