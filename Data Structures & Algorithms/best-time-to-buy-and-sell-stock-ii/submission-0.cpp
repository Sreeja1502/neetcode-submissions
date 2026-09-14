class Solution {
public:
// f(vector<int>&prices,int ind,int buy){
//     if(ind>=prices.size()) return 0;

//     if(!buy) {
//         f(prices,ind+1,1);
//     }
//     else {
//      if(ind+1<prices.size() && prices[ind+1]<prices)   f(prices,ind+1,0);
//     }
// }

    int maxProfit(vector<int>& prices) {
//         if(prices.size()==1) return 0;
       int maxprofit=0;
// for(int i=0;i<prices.size();i++){
// maxprofit=max(maxprofit, f(prices,i,0););
// }
for(int i=1;i<prices.size();i++){
    if(prices[i]>prices[i-1]){
maxprofit+=(prices[i]-prices[i-1]);
    }
}
return maxprofit;
    }
};