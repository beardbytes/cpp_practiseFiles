/*

Given a sorted array nums, remove the duplicates in-place such that each element
appear only once and return the new length.

*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    //unordered_map<int, int> mp;
    while (i < nums.size() - 1)
    {
        if (nums[i] == nums[i + 1])
        {
            nums.erase(nums.begin() + (i + 1));
        }
        else
        {
            i++;
        }
    }
    return nums.size();
}

int main()
{
    int result;
    vector<int> elems;
    elems.push_back(0);
    elems.push_back(0);
    elems.push_back(1);
    elems.push_back(1);
    elems.push_back(2);
    elems.push_back(3);
    elems.push_back(4);
    elems.push_back(4);
    result = removeDuplicates(elems);
    cout << "The length of the array after removal of duplications: ";
    cout << result << endl;
    return 0;
}