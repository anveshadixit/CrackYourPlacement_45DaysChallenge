class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        vector<int> v;
        for(int i = 0; i <n-1 ; i++){
            if(nums[i] == nums[i+1]){
                v.push_back(nums[i+1]);
            }
        }
        
        return v;

    }
       
};