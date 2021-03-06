// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//
// You may assume no duplicates in the array.
//
//
// Here are few examples.
// [1,3,5,6], 5 &#8594; 2
// [1,3,5,6], 2 &#8594; 1
// [1,3,5,6], 7 &#8594; 4
// [1,3,5,6], 0 &#8594; 0


class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int ans = 0;
        int n = nums.size();
        if (nums[0] > target)
            return 0;
        if (nums[n - 1] < target)
            return n;
        while (ans < n) {
            if (target <= nums[ans])
                return ans;
            ++ans;
        }

        return ans;
    }
};
