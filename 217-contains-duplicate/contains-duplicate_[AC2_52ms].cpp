// Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.


class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        if (nums.size() > 1) {
            unordered_map<int, int> mp;
            for (const auto &n : nums) {
                if (++mp[n] > 1)
                    return true;
            }
        }
        return false;
    }
};
