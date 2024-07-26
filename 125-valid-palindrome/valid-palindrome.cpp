class Solution {
public:
    bool isPalindrome(string s) {
        string str2="";
        for(char c:s){
            if(isalnum(c)){
                str2+=tolower(c);
            }
        }

        for(int i=0;i<str2.length();i++){
            if(str2[i]!=str2[str2.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};