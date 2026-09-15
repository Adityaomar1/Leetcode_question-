class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ans;
        int n = num;
        while(n>0){
            int d = n%10;
            ans.push_back(d);
            n/=10;
        }
        for(int i = ans.size()-1;i>=0;i--){
            if(ans[i]== 6){
                ans[i] = 9;
                break;
            }
        }
        int fans =0;
        for(int i = ans.size()-1;i>=0;i--){
            fans = fans*10+ans[i];
        }
        return fans;
    }
};