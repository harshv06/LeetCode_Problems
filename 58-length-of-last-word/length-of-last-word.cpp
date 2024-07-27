class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int n=s.length()-1;
        while(!isalnum(s[n])){
            n--;
        }

        for(int i=n;i>=0;i--){
            if(s[i]==' '){
                break;
            }else{
                length++;
            }
        }
        return length;  
    }
};