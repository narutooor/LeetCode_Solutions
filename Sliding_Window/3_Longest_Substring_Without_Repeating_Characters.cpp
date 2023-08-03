class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int longest_length = 0;
        int left = 0;
        unordered_map<char, int> char_map;

        for (int right = 0; right < n; ++right) {
            if (char_map.find(s[right]) != char_map.end()) {
                left = max(left, char_map[s[right]] + 1);
            }
            char_map[s[right]] = right;
            longest_length = max(longest_length, right - left + 1);
        }

        return longest_length;
        
    }
};
