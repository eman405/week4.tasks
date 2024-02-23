/* Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.
Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0] */
#include <iostream>
using namespace std;
int main()
{
	int N, mul = 1;
	cout << "Enter any number : ";
	cin >> N;
	cout << "Enter " << N << " numbers : ";
	int* nums = new int[N];
	int* answers = new int[N];
	for (int i = 0; i < N; i++) 
	{
		cin >> nums[i];
	}
	for (int i = 0; i < N; i++) 
	{
		answers[i] = 1;
		for (int j = 0; j < N; j++) 
		{
			if (i == j) 
			{
				continue;
			}
			answers[i] *= nums[j];
		}
		cout << answers[i] << " ";
	}
	cout << "\n\n\n\n";
}
