class Solution {
public:
    bool isValid(string s) {
        stack<char> items;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                items.push(c);
            }else{
                if(items.empty()) return false;
                char top=items.top();
                items.pop();
                if((top!='(' && c==')') || (top!='[' && c==']') || (top!='{' && c=='}')) return false;
            }
        }

        return items.empty();
    }
};