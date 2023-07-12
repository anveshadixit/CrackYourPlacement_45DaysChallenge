class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int multiply = 0;
        int n = nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
       
        multiply = nums[n-1]*nums[n-2]*nums[n-3];
        int ans2= nums[0]*nums[1]*nums[n-1];
        
        
        return max(multiply ,ans2);
    }
};