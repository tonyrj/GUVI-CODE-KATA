#include<stdio.h>


int main()
{
 int n,t=0,r,q;

 scanf("%d",&n);
 q=n;
 do
 {
      r=q%10;
	t += r*r;
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",t);

}
