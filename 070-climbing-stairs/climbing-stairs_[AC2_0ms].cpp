// You are climbing a stair case. It takes n steps to reach to the top.
//
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//
//
// Note: Given n will be a positive integer.


class Solution {
public:
    int climbStairs(int n)
    {
        ++n;
        double phi = (1 + pow(5, 0.5)) / 2;
        return round(pow(phi, n) / pow(5, 0.5));
    }
};
