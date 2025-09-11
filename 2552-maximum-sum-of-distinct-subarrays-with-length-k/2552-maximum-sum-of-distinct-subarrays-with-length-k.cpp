class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        long long sum = 0, ans = 0;
        int i = 0;

        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            freq[nums[j]]++;

            if(j - i + 1 > k){
                sum -= nums[i];
                freq[nums[i]]--;
                if(freq[nums[i]] == 0) freq.erase(nums[i]);
                i++;
            }

            if(j - i + 1 == k && freq.size() == k){
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};