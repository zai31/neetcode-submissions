class Solution {
public:
    int f(vector<int>& prices,int i,int buy)
    { int n=(int)prices.size();
        if(i>=n) return 0;
        
         if(buy)
         {
         return max(-prices[i]+f(prices,i+1,0),f(prices,i+1,1));//buy 
         }
         else{
         return max(prices[i]+f(prices,i+2,1),f(prices,i+1,0));
        }
    }
    
    int maxProfit(vector<int>& prices) {
               int n=(int)prices.size();
        
                //vector<int> dp(n+1,0);

               return f(prices,0,1);
                


        
        
    }
};
