class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> ans;
        for (int i=0; i<n; i++)
        {
            ans.push_back(i*2-n+1);
        }
        return ans;
    }
};