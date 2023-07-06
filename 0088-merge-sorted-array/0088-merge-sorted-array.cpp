class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v1;
         int c=m;
          for(int i=0;i<n;i++)
        {
            nums1[c]=nums2[i];
              c++;
        }
       
        sort(nums1.begin(),nums1.end());
     
        
    }
      
};