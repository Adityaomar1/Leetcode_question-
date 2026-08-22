class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int prod = 1;
        while(num>0){
            int d = num%10;
            sum+=d;
            prod*=d;
            num/=10;
        }
        cout << sum << endl;
        cout << prod << endl;
        if(n%(sum+prod)==0) return true;
        return false;
    }
};