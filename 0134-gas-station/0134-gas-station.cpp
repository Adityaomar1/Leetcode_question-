class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_sum = accumulate(gas.begin(),gas.end(),0);
        int cost_sum = accumulate(cost.begin(),cost.end(),0);
        if(gas_sum < cost_sum) return -1;
        int start =0;
        int curr_sum =0;
        for(int i =0;i<gas.size();i++){
            curr_sum += gas[i] - cost[i];
            if(curr_sum<0){
                start = i + 1;
                curr_sum =0;
            }
        }
        return start;
    }
};