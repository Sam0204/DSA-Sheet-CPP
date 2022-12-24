/*
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/


#include<bits/stdc++.h>
using namespace std;

void func(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	func(arr, n);


	return 0;
}