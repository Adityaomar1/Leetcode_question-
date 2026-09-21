class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        for(auto match: matches){
            int winner = match[0];
            int loser = match[1];
            mp[winner]+=0;
            mp[loser]++;
        }
        vector<int> win;
        vector<int> win1;
        for(auto &it: mp){
            if(it.second == 0){
                win.push_back(it.first);
            }
            else if(it.second == 1){
                win1.push_back(it.first);
            }
        }
        sort(win.begin(),win.end());
        sort(win1.begin(),win1.end());
        return {win,win1};
    }
};