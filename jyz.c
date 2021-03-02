#include <stio.h>

int my_judge()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = my_judge();
	if (ret == 1)
		printf("ะก");
	else
		printf("ด๓");
	return 0;
}






int main()
{
	int i = 9; //000000000000000000001001
	float* p = (float*)&i; 
	printf("%d\n", i);
	printf("%lf\n", *p);
	*p = 9.0;
	printf("%d\n", i);
	printf("%lf\n", *p);
	return 0;
}