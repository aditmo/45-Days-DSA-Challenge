class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxpro=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            mxpro=max(mxpro,prices[i]-minprice);
        }
        return mxpro;
        
    }
};