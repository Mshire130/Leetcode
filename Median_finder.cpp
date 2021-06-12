class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<int> arr;

    MedianFinder() {
      this->arr = {};   
    }

    void swap(vector<int>* arr, int i, int j){
      int temp = arr->at(i);
      arr->at(i) = arr->at(j);
      arr->at(j) = temp;
      //arr[i] = arr[j];
      //arr[j] = temp;
    }

    int partition(vector<int> &arr, int start, int end){
      
      int pivot = arr[start];
      int swapIdx = start;

      for(int i = start + 1; i < arr.size(); i++){
        if(pivot > arr[i]){
          swapIdx++;
          swap(&arr, swapIdx, i); 
        }
      }

      swap(&arr, start, swapIdx);
      return swapIdx;
    }

    vector<int> quickSort(vector<int> &arr, int left, int right){
      if(left < right){
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
      }
      return arr;
    }

    
    void addNum(int num) {
     arr.push_back(num);
     
     //for(int i = 0; i < arr.size(); i ++){
     //    std:cout<< arr[i] << ", ";
     //} 
     //std::cout<< "\n";   
    
        
    }
    
    double findMedian() {
        sort(arr.begin(),arr.end());
      if (arr.size() == 0) {
        return 0;
      }

      if (arr.size() % 2 == 0){
        int mid = arr.size()/2;
        std:cout<<arr[mid] << ", " << arr[mid-1];
        double median = (arr[mid] + arr[mid-1]);
        median = median/2;
        //std:cout<< arr[mid] << ", " << arr[mid-1] << ", " <<  median;

        return median;

      }else{
        //Odd
        int mid = arr.size()/2;
        double median = arr[mid];

        return median;
      }
        
    }
};
/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
