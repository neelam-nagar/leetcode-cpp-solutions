class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int maxLen = 0, start = 0, end = 0, n = s.size();

        while (end < n) {
            if (st.find(s[end]) == st.end()) {
                st.insert(s[end]);
                maxLen = max(maxLen, end - start + 1);
                end++;
            } else {
                st.erase(s[start]);
                start++;
            }
        }

        return maxLen;
    }
};