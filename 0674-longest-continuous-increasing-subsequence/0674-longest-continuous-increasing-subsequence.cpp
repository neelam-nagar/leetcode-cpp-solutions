class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int ans = 1, curr = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                curr++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};