class Solution {
public:
    int minAddToMakeValid(string s) {
        int openparen =0;
        int closeparen =0;
        for(char ch: s){
            if(ch=='('){
                openparen++;
            }
            else if(ch==')'&& openparen>0){
                openparen--;
            }
            else{
                closeparen++;
            }
        }
        return closeparen + openparen;
    }
};