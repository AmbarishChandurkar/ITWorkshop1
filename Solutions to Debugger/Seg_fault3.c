#include <stdio.h>
int main(void)
{
	const int data[10] = {1,2,3,4,5,6,7};
	int i,sum;
	for(i=0;i<=7;i++){
		sum+=data[i];
	}
	printf("sum=%i \n",sum);
	return 0;
}
