#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void minmax(int a[], int len, int* min, int* max);
int main() {
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf_s("%d ", &a[i]);
	int min, max;
	minmax(a, sizeof a / sizeof a[0], &min, &max);
	printf("min=%d max=%d\n",min,max);
	return 0;
}
void minmax(int a[], int len, int* min, int* max) {
	int i;
	*min = *max = a[0];
	for (i = 0; i < len; i++)
	{
		if (a[i] < *min)
			*min = a[i];
	}
	for (i = 0; i < len; i++) 
	{
		if (a[i] > *max)
			*max = a[i];
	}

}