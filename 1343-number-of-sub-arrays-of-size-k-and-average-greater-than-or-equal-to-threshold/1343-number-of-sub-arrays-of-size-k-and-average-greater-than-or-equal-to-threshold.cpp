class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int low =0;
        int sum =0;
        int count =0;
        for(int high =0;high<n;high++){
            sum+=arr[high];
            if(high-low+1 > k){
                sum-=arr[low];
                low++;
            }
            if(high-low+1==k){
                if(sum>= k*threshold) count++;
            }
        }
        return count;
    }
};