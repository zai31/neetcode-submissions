class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size(), l=0,r=n-1;    
        int res=0;
        while(l<r)
        {
            int area=min(heights[l],heights[r])*((r-l));
            res=max(res,area);
            if(heights[r]>heights[l]) l++;
            else r--; 
            
        }
        return res;
    }
};
