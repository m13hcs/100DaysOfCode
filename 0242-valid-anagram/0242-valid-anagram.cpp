class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()==t.length())
        {
            vector<char> vs(s.begin(),s.end());
            vector<char> vt(t.begin(),t.end());
            sort(vs.begin(),vs.end());
            sort(vt.begin(),vt.end());
            int ans = 0;
            for(int i = 0; i<vt.size(); i++)
            {
                if(vs[i]==vt[i]){
                    ans++;
                }
            }
            if(ans==vs.size())
            {
                return true;
            }
        }
 
        
            return false;
        
    }
};