#include <iostream>
using namespace std;
// void swap(int *a, int *b)
// {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

int partition(int *a, int start, int end)
{
	int pivot = a[end];
	int pIndex = start;
	//Set pivot to last element
	//Set PartionIndex to starting index
	for (int i = start; i < end; i++)
	{
		if (a[i] <= pivot)
		{
			//swap element at i and pIndex
			swap(a[i], a[pIndex]); // calls for std::swap()
			pIndex++;
		}
	}
	swap(a[end], a[pIndex]);
	return pIndex;
}

void QuickSort(int *a, int start, int end)
{
	// if there is only one ele
	// start will be pivot i.e (start >= end) can also be used
	if (start < end)
	{
		int partitionIndex = partition(a, start, end);
		QuickSort(a, start, partitionIndex - 1);
		QuickSort(a, partitionIndex + 1, end);
	}
}

int main()
{
	int a[] = {3, 12, 34, 35, 54, 31, 1};
	int n = sizeof(a) / sizeof(int);
	QuickSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
