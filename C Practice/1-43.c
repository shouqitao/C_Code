#include <stdio.h>

int main()
{
	int i, num;
	num=2;
	for(i=0;i<3;i++)
	{
		printf("the num is: %d\n",num);
		num++;
		{
			static int num=1;
			printf("the inner num is: %d\n",num);
			num++;
		}
	}
	return 0;
}
