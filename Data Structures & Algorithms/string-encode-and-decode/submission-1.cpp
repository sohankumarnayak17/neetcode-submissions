class Solution {
public:

    string encode(vector<string>& strs) {

        string res = "";

        for(int i = 0; i < strs.size(); i++) {

            res += to_string(strs[i].size()) + "#";
            res += strs[i];
        }

        return res;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while(i < s.size()) {

            string len = "";

            while(s[i] != '#') {
                len += s[i];
                i++;
            }

            int size = stoi(len);

            i++;

            string word = "";

            for(int j = 0; j < size; j++) {
                word += s[i];
                i++;
            }

            ans.push_back(word);
        }

        return ans;
    }
};