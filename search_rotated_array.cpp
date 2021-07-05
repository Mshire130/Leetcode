#include <iostream>
#include <vector>

using namespace std;

//BST to find smallest value in array (tells you index at which rotation occured)
//BST LHS to find target
//BST RHS to find target
//return target

int boundary(vector<int>& nums, int left, int right, int target){
  int mid = (left+right)/2;
  int pair;
  
  if(nums[left] < nums[mid] && nums[mid] < nums[right]){
    return left;
    
  }
  else if (nums[left] > nums[mid] && nums[mid] < nums[right]){
    return boundary(nums, left, mid - 1, target);
  }
  // 1 , 10, 5
  else if (nums[left] < nums[mid] && nums[mid] > nums[right]){
    return boundary(nums, mid + 1 , right  , target);
  }
  else if(nums[left] == nums[mid] && nums[mid] == nums[right]){
    return left + 1;
  }
  return 0;
  // // 10 5 3
  // else if (nums[left] > nums[mid] && nums[mid] > nums[right]){
  //   return 
  // }

}


int binarySearch(vector<int>& nums, int target, int left, int right){
  return 0;
}

// int search(vector<int>& nums, int target) {
//   //int b = boundary(nums, 0, nums.size() - 1, target);
//   vector<int> vtest = {7,2,3,4,5,6};
//   int test = boundary(vtest, 0, 6, 5);
//   cout << test;
// }

// 7,8,1,2,3,4,5,6
// 7, 1, 2




// 7, 3, 6
// 7, 1, 2
// 7, 7 ,7

int main(){
  {7, 8, 9, 10, 11, 12, 1}
  
  7,10,1
  11
  vector<int> vtest = {4,5,6,-1,0,1,2};
  // 4 ,  -1 , 2
  // 4,   5   , 6
  int test = boundary(vtest, 0, vtest.size()-1, 5);
  cout << test;
  //int b = boundary(vtest, 0, vtest.size() - 1, target);
  return 0;
}

//https://leetcode.com/problems/search-in-rotated-sorted-array/

//3 Binary search, to find boundary, then to binary search LHS and RHS
