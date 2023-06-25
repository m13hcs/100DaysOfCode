class Solution {
public:
    string convertToTitle(int columnNumber) {
        string english_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string column_title;    
        
        while(columnNumber > 0){
            char ch = char(ceil((columnNumber-1)%26 + 65));
            column_title = ch+column_title;
            columnNumber = (columnNumber-1)/26;
        }
        return column_title;
    }

};