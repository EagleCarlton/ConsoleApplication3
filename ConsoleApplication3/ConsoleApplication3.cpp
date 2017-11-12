// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//气泡排序

#include "stdafx.h"
#include "stdio.h"
void bubble(int p[], int n);
void display_array(const int p[], int n);
int main()
{
	int a[10], i;
	printf("input 10 integers:\n");
	for (i = 0; i < 10; ++i)
		scanf_s("%d", &a[i]);
	bubble(a, 10);
	display_array(a, 10);
    return 0;
}
void bubble(int p[], int n)
{
	int i, j, temp, last;
	i = 0;
	while (i < n - 1)
	{
		last = n - 1;
		for (j = n - 1; j > i; j--)
			if (p[j] < p[j - 1])
			{
				temp = p[j - 1];
				p[j - 1] = p[j];
				p[j] = temp;
				last = j;
			}
		i = last;
	}
}
void display_array(const int p[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d\t", p[i]);
	printf("\n");
}

