class Solution {
public:
    string reverseParentheses(string s) {
        string st;
        for(char c: s){
            if(c!=')'){
                st.push_back(c);
            }else{
                string temp;
                while(st.back()!='('){
                    temp.push_back(st.back());
                    st.pop_back();
                }
                st.pop_back();
                
                for(char c: temp){
                    st.push_back(c);
                }
            }
        }
        return st;
    }
};