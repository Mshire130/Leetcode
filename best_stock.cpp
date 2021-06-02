class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
  if (size == 1) {
    return 0;
  }
  int i = 0;
  int j = 1;
  int maxProfit1 = 0;
  int curProfit;
  while ((i < j) & (j < size)){
    int price1 = prices[i];
    int price2 = prices[j];
    curProfit = price2 - price1;
    if (curProfit > maxProfit1) {
      maxProfit1 = curProfit;
    }
    if (price1 > price2) {
      i = j;
      j = i + 1;
    }
    else{
      j++;
    }
  }
  return maxProfit1;
    }
};
