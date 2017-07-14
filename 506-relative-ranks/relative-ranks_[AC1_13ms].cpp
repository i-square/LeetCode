// Given scores of N athletes, find their relative ranks and the people with the top three highest scores, who will be awarded medals: "Gold Medal", "Silver Medal" and "Bronze Medal".
//
// Example 1:
//
// Input: [5, 4, 3, 2, 1]
// Output: ["Gold Medal", "Silver Medal", "Bronze Medal", "4", "5"]
// Explanation: The first three athletes got the top three highest scores, so they got "Gold Medal", "Silver Medal" and "Bronze Medal". For the left two athletes, you just need to output their relative ranks according to their scores.
//
//
//
// Note:
//
// N is a positive integer and won't exceed 10,000.
// All the scores of athletes are guaranteed to be unique.


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums)
    {
        vector<string> ans(nums.size());
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < nums.size(); ++i) {
            pq.push(make_pair(nums[i], i));
        }
        int cnt = 1;
        for (int i = 0; i < nums.size(); ++i) {
            switch (cnt) {
            case 1:
                ans[pq.top().second] = "Gold Medal";
                break;
            case 2:
                ans[pq.top().second] = "Silver Medal";
                break;
            case 3:
                ans[pq.top().second] = "Bronze Medal";
                break;
            default:
                ans[pq.top().second] = to_string(cnt);
                break;
            }
            ++cnt;
            pq.pop();
        }

        return ans;
    }
};
