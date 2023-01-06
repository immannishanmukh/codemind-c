#include<stdio.h>
int main()
{
	char a[100],i;
	int c=0;
	scanf("%[^
]s",&a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
		c++;	
		}
	}
	printf("%d",c+1);
}