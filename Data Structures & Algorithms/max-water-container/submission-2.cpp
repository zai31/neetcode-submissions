class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=(int)heights.size();

        int l=0,r=n-1,res=0,w=0,h=0;
        while(l<r)
        {
             w=(r-l),h=min(heights[r],heights[l]);
             res=max(w*h,res);
            if(heights[r]<heights[l]) 
            r--;
            else 
            l++;
            
            
        }
        return res;
    }
};
