class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
    {
        priority_queue<int> maxBricks; 
        
        int i=0, height_diff=0;
        for(i=0; i<heights.size()-1; i++)
        {
            height_diff = heights[i+1]-heights[i];
            
            
            if(height_diff<=0) 
                continue;
            
            bricks = bricks - height_diff; 
            maxBricks.push(height_diff); 
            
            if(bricks<0) 
            {
                bricks = bricks +maxBricks.top();
                maxBricks.pop();
                ladders--; 
            }
            
            if(ladders<0) 
                break;
        }
        return i;
    }
};