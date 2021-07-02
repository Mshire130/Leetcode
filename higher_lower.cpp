#include <iostream>
#include <vector>

using namespace std;

int helper(long left, long right){
  long mid = (left + right)/2;

  if (guess(mid) == 0){
    return mid;  
  }
  if (guess(mid) == -1){
    return helper(left ,mid-1);
  }
  else{
    return helper(mid + 1, right);
  }
}
