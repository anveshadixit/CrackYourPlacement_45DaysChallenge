class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = 0;
        for(int i=0;i<nums.size();i++)
        {
            
             min = min +nums[i]-nums[0];
            
        }
        return min;
    }
};