int helper(vector<int>& nums, int left, int right){
  int mid = left + (right - left) / 2;

  if(nums[mid] < nums[mid-1]){
    //check LHS
    right = mid;
    helper(nums, left, right);

  }
  else if(nums[mid] < nums[mid+1]){
    left = mid;
    helper(nums, left, right);
    //check RHS

  }
  else{
    return mid;
  }

  return mid;
}

int findPeakElement(vector<int>& nums) {
  int left = 0;
  int right = nums.size();
  return helper(nums, 0, right);
}
