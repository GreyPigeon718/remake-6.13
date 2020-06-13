#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<assert.h>
#include<stdio.h>
struct car {
	double price;
	char brand[];
}car;
struct car* createArray(int n)
{
	struct car* p =(struct car*)malloc(sizeof(car) * n);
	assert(p);
	return p->brand;
}
void insert(struct car* p, int index, struct car* v)
{
	p->brand[index - 1] = v;
}
void display(struct car* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s", p->brand[i]);
	}
}