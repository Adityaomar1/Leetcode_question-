class Solution {
public:
    bool func(vector<int>& weights, int days, int guess){
        int weight = 1;
        int sum =0;
        for(int i =0;i<weights.size();i++){
            sum+=weights[i];
            if(sum<=guess){
                continue;
            }
            else{
                weight++;
                sum = weights[i];
            }
        }
        if(weight<=days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            int weight = func(weights,days,mid);
            if(weight){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};