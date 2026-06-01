class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count = 1;
        int maxCount = 1;
        int majority = nums[0];

        for(int i = 0; i < nums.size() - 1; i++) {

            if(nums[i] == nums[i + 1]) {
                count++;
            }
            else {
                count = 1;
            }

            if(count > maxCount) {
                maxCount = count;
                majority = nums[i];
            }
        }

        return majority;
    }
};