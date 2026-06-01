class Solution {
public:

    vector<int> merge(vector<int>& left, vector<int>& right) {

        vector<int> ans;

        int i = 0;
        int j = 0;

        while(i < left.size() && j < right.size()) {

            if(left[i] <= right[j]) {
                ans.push_back(left[i]);
                i++;
            }
            else {
                ans.push_back(right[j]);
                j++;
            }
        }

        while(i < left.size()) {
            ans.push_back(left[i]);
            i++;
        }

        while(j < right.size()) {
            ans.push_back(right[j]);
            j++;
        }

        return ans;
    }

    vector<int> mergeSort(vector<int>& nums) {

        if(nums.size() <= 1) {
            return nums;
        }

        int mid = nums.size() / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        left = mergeSort(left);
        right = mergeSort(right);

        return merge(left, right);
    }

    vector<int> sortArray(vector<int>& nums) {

        return mergeSort(nums);
    }
};