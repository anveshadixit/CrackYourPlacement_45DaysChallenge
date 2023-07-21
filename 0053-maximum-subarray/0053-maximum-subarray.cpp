class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int Sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
          Sum = max(nums[i], Sum + nums[i]);
            maxi = max(maxi, Sum);
        }

        return maxi;
    }
};