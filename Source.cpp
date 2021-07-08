#include<stdio.h>
int main()
{	
	int a;
	int b;
	int c;
	int d;
	printf("Please input any integral number: ");
	scanf_s("%d", &a);
	b = a / 3600;
	c = (a - 3600) / 60;
	d = (a - 3600) - (c * 60);
	printf("%dhours %dminutes %dseconds", b, c, d);
	return 0;
}