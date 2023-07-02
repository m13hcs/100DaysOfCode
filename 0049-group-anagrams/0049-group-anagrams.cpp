class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(auto i : strs)
        {   
            string key_word = i;
            sort(key_word.begin(),key_word.end());
            mpp[key_word].push_back(i);
        }

        vector<vector<string>> resultvec;

        for(auto i : mpp )
        {
            resultvec.push_back(i.second);
        }

        return resultvec;
    }
};