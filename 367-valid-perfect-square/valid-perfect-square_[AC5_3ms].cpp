// Given a positive integer num, write a function which returns True if num is a perfect square else False.
//
//
// Note: Do not use any built-in library function such as sqrt.
//
//
// Example 1:
//
// Input: 16
// Returns: True
//
//
//
// Example 2:
//
// Input: 14
// Returns: False
//
//
//
// Credits:Special thanks to @elmirap for adding this problem and creating all test cases.


class Solution {
public:
    bool isPerfectSquare(int num)
    {
        int low = 1, high = num;
        while (low <= high) {
            long mid = (low + high) >> 1;
            if (mid * mid == num) {
                return true;
            } else if (mid * mid < num) {
                low = (int)mid + 1;
            } else {
                high = (int)mid - 1;
            }
        }
        return false;
    }
};
