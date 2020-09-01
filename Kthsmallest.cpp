#include <iostream>
#include <limits.h>
using namespace std;
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
class MinHeap
{
	int heap_size;
	int *harr;
	int capacity;

public:
	MinHeap(int a[], int size);
	void MinHeapify(int i);
	int parent(int i) { return (i - 1) / 2; }
	int left(int i) { return (2 * i + 1); }
	int right(int i) { return (2 * i + 2); }
	int getMin() { return harr[0]; };
	int extractMin();
};
MinHeap::MinHeap(int a[], int size)
{
	heap_size = size;
	harr = a;
	int i = (heap_size - 1) / 2;
	while (i >= 0)
	{
		MinHeapify(i);
		i--;
	}
}
void MinHeap::MinHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < heap_size && harr[l] < harr[smallest])
	{
		smallest = l;
	}
	if (r < heap_size && harr[r] < harr[smallest])
	{
		smallest = r;
	}
	if (smallest != i)
	{
		swap(&harr[i], &harr[smallest]);
		MinHeapify(smallest);
	}
}
int MinHeap::extractMin()
{
	if (heap_size == 0)
	{
		return INT_MAX;
	}
	int root = harr[0];
	if (heap_size > 1)
	{
		harr[0] = harr[heap_size - 1];
		MinHeapify(0);
	}
	heap_size--;
	return root;
}

int kthsmallest(int a[], int n, int k)
{
	MinHeap mh(a, n);
	for (int i = 0; i < k - 1; i++)
	{
		mh.extractMin();
	}
	return mh.getMin();
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(a[0]);
	int k = 9;
	cout << kthsmallest(a, n, k) << endl;
	return 0;
}
