class Solution {
public:
    bool judgeSquareSum(int c) {
       long long ans = 0;
       int i = 0;
       long long j = int(sqrt(c));
       while(i<=j){
        ans = (i*i)+(j*j);
        if(ans == c) return true;
        else if(ans<c){
            i++;
        }
        else{
            j--;
        }
       } 
       return false;
    }
};