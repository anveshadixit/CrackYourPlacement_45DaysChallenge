class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i+1]-nums[i]==2)
        //     {
        //       return nums[i]+1;
        //     }
        //     // if(nums[i+1]-nums[i]==1)
        //     // {
        //     //     return 
        //     // }
        // }


        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(s.find(i)==s.end())
            return i;
        }
       return -1;
    }
};