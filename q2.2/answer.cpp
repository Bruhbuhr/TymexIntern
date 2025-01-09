#include <iostream>
#include <vector>

using namespace std;

int find_missing_number(vector<int> &nums)
{
    int n = nums.size();
    int expected_sum = (n + 1) * (n + 2) / 2; // Formula for sum of 1 to n+1
    int actual_sum = 0;
    for (int num : nums)
    {
        actual_sum += num;
    }
    return expected_sum - actual_sum;
}

int main()
{
    vector<int> nums = {3, 7, 1, 2, 6, 4};
    int missing_number = find_missing_number(nums);
    cout << "The missing number is: " << missing_number << endl; 
    return 0;
}