#Contains duplicate
def duplicate(nums):
    hm = {}
    for i,val in enumerate(nums):
        if hm.get(val) == None:
            hm[val] = 1
        else:
            hm[val] += 1
            return True
        
    return False
