#include <stdio.h>
int main(void) 
{

int n,i,resu,b[35],p=0;

char rn[10];

scanf("%s",rn);

n=strlen(rn);

for(i=0;i<n;i++)

{

	if(rn[i]=='I')

	b[i]=1;

	else if(rn[i]=='V')

	b[i]=5;

	else if(rn[i]=='X')

	b[i]=10;

	else if(rn[i]=='L')

	b[i]=50;

	else if(rn[i]=='C')

	b[i]=100;

	else if(rn[i]=='D')

	b[i]=500;

	else

	printf("\nINVALID");

}

for(i=0;i<n;i+=2)

{

	if(b[i]<b[i+1])

	{

		resu=b[i+1]-b[i];

	}

	else 

	{

		resu=b[i]+b[i+1];

	}

p=resu+p;

}

printf("\n%d",p);



return 0;

}
