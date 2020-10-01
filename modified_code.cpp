#include <bits/stdc++.h>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
	// Initialize result
	int max_sum = INT_MIN;
	int current_sum = 0;
	for (int i = 0; i < k; i++)
	{
		current_sum += arr[i];
	}
	max_sum = current_sum;
	for (int i = k; i < n; i++) {
		current_sum = current_sum + arr[i] - arr[i - k];
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}

// Driver code
int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}