#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<int,int> hm = {};
int count = 0;

int climbStairs(int n){
  if(n<= 2){
      return n;
  }
  
  //found key
  if(hm.find(n) != hm.end()){
    return hm[n];
  }
  else{
    int leftChain = climbStairs(n-2);
    int rightChain = climbStairs(n-1);

    hm[n] = leftChain + rightChain;

    return hm[n];
    
  }
}
