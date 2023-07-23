class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=1e9,maxi=-1e9;
        for(auto i:prices){
            mini=min(mini,i);
            maxi=max(maxi,i-mini);
        }
        return maxi;
    }
};