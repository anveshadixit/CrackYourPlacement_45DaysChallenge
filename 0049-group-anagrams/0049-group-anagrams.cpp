class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
	vector<vector<string>>v;
        
       unordered_map<string, vector<string>>mp;
        
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        
        //now simply put the elements  of second column of map in v
        
        for(auto i : mp)
        {
            v.push_back(i.second);
        }

        return v;
        
    }
};
