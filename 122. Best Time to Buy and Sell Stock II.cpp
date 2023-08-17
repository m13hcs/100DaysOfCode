class Solution {
  public: 
  int maxProfit(vector < int > & prices) {

    int buying_price = prices[0];
    int profit = 0;

    for (int i = 0; i < prices.size(); i++) 
    {
      if (buying_price > prices[i]) 
        {
          buying_price = prices[i];
        } 
      else if (buying_price < prices[i]) 
        {
         
          profit += (prices[i]-buying_price);
          buying_price = prices[i];
        }
    }

    return profit;
      
    }

  };
