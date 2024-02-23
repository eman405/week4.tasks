/* Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
Example 2:
Input: nums = [1,2,3,4]
Output: false */
#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter any number : ";
	cin >> N;
	int* arr = new int[N];
	cout << "Enter " << N << " numbers : ";
	string appearance = "False";
	for (int i = 0; i < N; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			if (arr[i] == arr[j]) 
			{
				if (i == j)
				{
					continue;
				}
				appearance = "True";
			}
		}
	}
	cout << appearance << "\n\n\n\n";
}

