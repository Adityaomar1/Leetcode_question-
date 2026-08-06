class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n<101){
            int num = n;
            int prod =1;

            while(num>0){
                int d = num%10;
                prod*=d;
                num = num/10;

                if(prod%t==0){
                    int ans = n;
                    return min(ans,n);
                }
            }
            n = n+1;
        }
        
        return 0;
    }
};