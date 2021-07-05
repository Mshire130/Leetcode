#include <vector>
#include <iostream>

using namespace std;

int helper(vector<int>& nums, int left, int right){

  if (left == right){
    return left;
  }

  int mid = left + (right - left) / 2;

  if(nums[mid] > nums[mid + 1]){
    //check LHS
    
    return helper(nums, left, mid);

  }
  //check RHS
  return helper(nums, mid+1, right);

}

int findPeakElement(vector<int>& nums) {
  int left = 0;
  int right = nums.size();
  return helper(nums, 0, right);
}
