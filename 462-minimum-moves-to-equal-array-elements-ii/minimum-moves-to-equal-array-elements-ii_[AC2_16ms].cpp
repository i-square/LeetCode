// Given a non-empty integer array, find the minimum number of moves required to make all array elements equal, where a move is incrementing a selected element by 1 or decrementing a selected element by 1.
//
// You may assume the array's length is at most 10,000.
//
// Example:
//
// Input:
// [1,2,3]
//
// Output:
// 2
//
// Explanation:
// Only two moves are needed (remember each move increments or decrements one element):
//
// [1,2,3]  =>  [2,2,3]  =>  [2,2,2]


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        auto it = nums.begin() + nums.size() / 2;
        nth_element(nums.begin(), it, nums.end());
        int ans = 0, median = *it;
        for (const auto &n : nums)
            ans += abs(n - median);
        return ans;
    }
};
