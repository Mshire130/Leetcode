def twoSum(nums,target):
    hm = {}
    pair = [0,0]
    
    #populate hashmap
    for i,val in enumerate(nums):
        hm[val] = i
    
    for i,val in enumerate(nums):
        diff = target - val
        if diff in hm and hm[diff] != i:
            return [i, hm[diff]]
