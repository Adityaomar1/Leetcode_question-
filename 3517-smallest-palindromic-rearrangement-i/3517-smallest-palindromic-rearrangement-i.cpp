class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freqarr(26,0);
        for(char ch: s){
            freqarr[ch-'a']++;
        }
        string left="";
        string mid = "";
        for(int i=0;i<26;i++){
            left+=string(freqarr[i]/2,'a'+i);

            if(freqarr[i]%2==1){
                mid = char('a'+i);
            }
        }
        string right = left;
        reverse(right.begin(),right.end());
        return left + mid + right;
    }
};