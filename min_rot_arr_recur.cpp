#include <iostream>
#include <vector>

using namespace std;

int helper(vector<int>& nums, int left, int right){
  if(nums.size() == 1){
    return nums[0];
  }
  
  int first = nums[0];
  int mid = left + (right-left)/2;

  cout<< nums[left] << ", "<< nums[mid] << ", " << nums[right] << endl;
  //base case (when to stop search)
  if(nums[mid] > nums[mid+1]){
    return nums[mid+1];
  }else if(nums[mid - 1] > nums[mid]) {
    return nums[mid];
  }
  //search to the right of mid
  if(nums[first] < nums[mid]){
    cout << "RUNNING" << endl;
    helper(nums, mid+1, right);
  }
  //search to the left of mid
  else if(nums[first] > nums[mid]){
    //inflection point around here 
    helper(nums, left, mid-1);
  }
  return -1;
}


int findMin(vector<int>& nums) {
  int left = 0;
  int right = nums.size()-1;
  int mid = left + (right-left)/2;

  //deals with case if its already sorted
  if(nums[left] < nums[right]){
    return nums[left];
  }
  else{

  return helper(nums, 0, right);
  }
  
}
