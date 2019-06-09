#include<stdio.h>

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int multi(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a % b;
}
int sqrt(int a, int b)
{
	return a ^ b;
}
typedef int(*fun)(int, int);

int main()
{	
	int output;
	int a = 1, b,d;
	char c;
	scanf("%c", &c);
	switch (c) {
	case '+':
		a = 0;
		break;
	case '-':
		a = 1;
		break;
	case '*':
		a = 2;
		break;
	case '%':
		a = 3;
		break;
	case '^':
		a = 4;
		break;
	}
	fun f[] = { add, sub, multi, div, sqrt };
	scanf("%d", &output);
	while (scanf("%d", &b) != EOF) {
		output = f[a](output, b);
	}

	printf("%d", output);
	

	return 0;
}