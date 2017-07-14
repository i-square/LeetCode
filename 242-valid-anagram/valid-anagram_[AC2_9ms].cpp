// Given two strings s and t, write a function to determine if t is an anagram of s. 
//
// For example,
// s = "anagram", t = "nagaram", return true.
// s = "rat", t = "car", return false.
//
//
// Note:
// You may assume the string contains only lowercase alphabets.
//
// Follow up:
// What if the inputs contain unicode characters? How would you adapt your solution to such case?


class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int alpha[26] = { 0 };
        for (const auto &c : s)
            ++alpha[c - 'a'];
        for (const auto &c : t)
            --alpha[c - 'a'];
        for (const auto &n : alpha)
            if (n != 0)
                return false;
        return true;
    }
};
