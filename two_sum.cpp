/*

Given an array of integers, return indices of the two numbers such that they add up 
to a specific target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice


*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        auto it = mp.find(target - nums[i]);
        if (it != mp.end())
        {
            return {it->second, i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> number, result;
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    //cout << "Enter the values in the array: " << endl;
    number.push_back(2);
    number.push_back(7);
    number.push_back(8);
    number.push_back(11);
    result = twoSum(number, target);
    cout << "The result: " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}