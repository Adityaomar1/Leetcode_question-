class Solution {
public:
    int minimumPushes(string word) {

        if(word.size()<=8){
            return word.size();
        }
        int ans =0;
        if(word.size()>8 && word.size()<16){
            for(int i =0;i<=7;i++){
                ans+=1;
            }
            for(int i = 8; i<word.length();i++){
                ans+=2;
            }
        }
        if(word.size()>=16 && word.length()<24){
            for(int i = 0;i<=7;i++){
                ans+=1;
            }
            for(int i = 8;i<=15;i++){
                ans+=2;
            }
            for(int i = 16;i<word.length();i++){
                ans+=3;
            }
        }
        if(word.size()>=24){
            for(int i = 0;i<=7;i++){
                ans+=1;
            }
            for(int i = 8;i<=15;i++){
                ans+=2;
            }
            for(int i = 16;i<=23;i++){
                ans+=3;
            }
            for(int i = 24;i<word.length();i++){
                ans+=4;
            }
        }
        return ans;
    }
};