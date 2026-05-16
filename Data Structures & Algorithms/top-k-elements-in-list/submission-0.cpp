class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<pair<int,int>> freq;

        int i = 0;

        while(i < n) {

            int j = i;
            int count = 0;

            while(j < n && nums[i] == nums[j]) {
                count++;
                j++;
            }

            freq.push_back({count, nums[i]});

            i = j;
        }

        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};