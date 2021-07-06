#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums) {
  int left = 0;
  int first = nums[0];
  int right = nums.size()-1;
  int mid = left + (right-left)/2;
  
  //one element arr
  if(nums.size() == 1){
    return nums[0];
  }  

  //deals with case if its already sorted
  if(nums[left] < nums[right]){
    return nums[left];
  }
  else{
    while (left <= right){
      int mid = left + (right-left)/2;
      
      //checking for inflection point #check1
      if(nums[mid] > nums[mid+1]){
        return nums[mid+1];
      }
      //checking for inflection point #check1
      if(nums[mid-1] > nums[mid]){
        return nums[mid];
      }

      //LHS is sorted, check RHS
      if(first < nums[mid]){
        left = mid+1;
      }
      //Inflection point is on LHS, check LHS
      if(first > nums[mid]){
        right = mid-1;
      }
    }
    return -1;
  }
  
}

