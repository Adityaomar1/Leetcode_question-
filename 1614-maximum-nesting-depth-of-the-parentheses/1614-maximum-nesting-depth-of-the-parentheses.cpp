class Solution {
public:
    int maxDepth(string s) {
        int ob =0;
        int mx = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                ob++;
                mx = max(mx,ob);
            }
            if(s[i]==')') ob--;
        }
        return mx;
    }
};