class Solution {
public:
    int characterReplacement(string s, int k) {

        int ans = 0;

        for(char c = 'A'; c <= 'Z'; c++) {

            int left = 0;
            int changes = 0;

            for(int right = 0; right < s.size(); right++) {

                if(s[right] != c) {
                    changes++;
                }

                while(changes > k) {

                    if(s[left] != c) {
                        changes--;
                    }

                    left++;
                }

                ans = max(ans, right - left + 1);
            }
        }

        return ans;
    }
};