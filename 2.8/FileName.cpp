int math(int x)
{
	if (x == 1)
		return 1;
	else
		return x * math(x - 1);
}


#include<stdio.h>
int main()
{
	int count = 0;
	int n = 0;
	int i = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		count=math(i)+count;
	}
	printf("%d", count);
	return 0;
}