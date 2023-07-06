class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;
        for(auto it : nums){
            map[it]++;
        }
        for(auto it : map){
            if(map[it.first] > n/2){
                return it.first;
            }
        }
        return 0;
    }
    
};