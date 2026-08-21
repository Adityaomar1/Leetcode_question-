class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<10){
            return {};
        }
        unordered_set<string> seen;
        unordered_set<string> ans;
        int k = 10;
        for(int i = 0;i+k<=s.size();i++){
            string window = s.substr(i,k);

            if(seen.count(window)){
                ans.insert(window);
            }
            else{
                seen.insert(window);
            }
        }
        return vector<string>(ans.begin(),ans.end());
    }
};