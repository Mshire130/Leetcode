#include <iostream>
#include <vector>

using namespace std;


int partition(vector<int> arr, int left, int right, int pivot){
  int arr_left;
  int arr_right;

  while (left <= right){
    while(arr[left] <= pivot){
      left++;
    }
    while (arr[right] >= pivot){
      right--;
    }
    
    if(left <= right){
      arr_left = arr[left];
      arr_right = arr[right];

      arr[left] = arr_right;
      arr[right] = arr_left;

      left++;
      right--;
    }

  }


    
  // for(int i=0; i < arr.size(); i++){
  //   cout << arr[i] << ", ";

  // }
  //   cout<< "\n";
  return left;
}


//recursive section
vector<int> quickSort(vector<int> arr, int left_idx, int right_idx){
  //choosing pivot as middle of array
  if (left_idx >= right_idx){
    return arr;
  }
  int size = arr.size();
  int pivot = arr[(left_idx + right_idx)/2];
  int index = partition(arr, left_idx, right_idx, pivot);

  quickSort(arr, left_idx, index-1);
  quickSort(arr, index, right_idx);

  return arr;
}


int main(){
  vector<int> arr = {12,13,5,2,5,100,15,3,2,1};
  vector<int> sort_arr = quickSort(arr, 0, arr.size()-1);

  for(int i=0; i < arr.size(); i++){
    cout << sort_arr[i] << ", ";

  }

  return 0;
}
//helper function

