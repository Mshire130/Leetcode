import sys
print(sys.maxsize)

def maxProfit(nums):
    minprice = sys.maxsize
    maxprofit = 0
    
    for i,val in enumerate(nums):
        if val < minprice:
            minprice = val
        elif val - minprice > maxprofit:
            maxprofit = val - minprice
    return maxprofit
