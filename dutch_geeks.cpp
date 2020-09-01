// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Utility function to print the contents of an array 
void printArr(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Function to sort the array of 0s, 1s and 2s 
void sortArr(int arr[], int n) 
{ 
	int i, cnt0 = 0, cnt1 = 0, cnt2 = 0; 

	// Count the number of 0s, 1s and 2s in the array 
	for (i = 0; i < n; i++) { 
		switch (arr[i]) { 
		case 0: 
			cnt0++; 
			break; 
		case 1: 
			cnt1++; 
			break; 
		case 2: 
			cnt2++; 
			break; 
		} 
	} 

	// Update the array 
	i = 0; 

	// Store all the 0s in the beginning 
	while (cnt0 > 0) { 
		arr[i++] = 0; 
		cnt0--; 
	} 

	// Then all the 1s 
	while (cnt1 > 0) { 
		arr[i++] = 1; 
		cnt1--; 
	} 

	// Finally all the 2s 
	while (cnt2 > 0) { 
		arr[i++] = 2; 
		cnt2--; 
	} 

	// Print the sorted array 
	printArr(arr, n); 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
	int n = sizeof(arr) / sizeof(int); 

	sortArr(arr, n); 

	return 0; 
} 
