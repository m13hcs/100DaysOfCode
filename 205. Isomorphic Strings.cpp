class Solution {
public:
    bool isIsomorphic(string s, string t) {

     if (s.length() != t.length()) 
     {
            return false;
     }
        unordered_map<char, char> sToT;  
        unordered_map<char, char> tToS;  

        for (int i = 0; i < s.length(); i++) {
            char charS = s[i];
            char charT = t[i];

      
            if (sToT.find(charS) != sToT.end() && sToT[charS] != charT) {
                return false;
            }
            if (tToS.find(charT) != tToS.end() && tToS[charT] != charS) {
                return false;
            }

          
            sToT[charS] = charT;
            tToS[charT] = charS;
        }

        return true;
    
    }
};
