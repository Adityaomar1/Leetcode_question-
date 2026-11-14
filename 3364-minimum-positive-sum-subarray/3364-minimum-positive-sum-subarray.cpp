
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mn = INT_MAX;
        int n = nums.size();

        for (int k = l; k <= r; k++) {
            int low = 0;
            int sum = 0;

            for (int high = 0; high < n; high++) {
                sum += nums[high];

                while (high - low + 1 > k) {
                    sum -= nums[low];
                    low++;
                }

                if (high - low + 1 == k && sum > 0) {
                    mn = min(mn, sum);
                }
            }
        }

        return mn == INT_MAX ? -1 : mn;
    }
};
