class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char c : s){
            if(c == 'c'){
                if(st.size()>=2 && st.top()=='b'){
                    st.pop();
                    if(st.top()=='a') st.pop();
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};