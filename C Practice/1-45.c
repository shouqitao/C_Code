#include <stdio.h>

int main()
{
	register int i;
	int tmp=0;
	for(i=0;i<=100;i++)
		tmp+=i;
	printf("Sum is %d\n", tmp);
	return 0;
}
