/* You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right.
You can only see the k numbers in the window. Each time the sliding window moves right by one position.
Return the max sliding window.
Example 1:
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7  
*/

#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter any number : ";
	cin >> N;
	cout << "Enter " << N << " numbers : ";
	int* nums = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}
	int SWsize;
	cout << "Enter the size of the sliding window : ";
	cin >> SWsize;
	for (int i = 0; i < N-SWsize+1; i++) 
	{
		int max = nums[i];
		for (int j = i; j < SWsize+i; j++)
		{
			if (nums[j]>=max)
			{
				max = nums[j];
			}
		}
		cout << max << " ";
	}
	cout << "\n\n\n\n";
}

