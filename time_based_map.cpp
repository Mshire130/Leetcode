unordered_map<string, vector<pair<string,int>>> tm = {};

TimeMap() {
  //HM of int and pair?
   unordered_map<string, vector<pair<string,int>>> tm = {};
     
}

void set(string key, string value, int timestamp) {
  //if key doesnt exist, add key value pair
  pair<string, int> val;
  val.first = value;
  val.second = timestamp; 
  if (tm.find(key) != tm.end()){
    tm[key] = {val};
  }
  else{
    tm[key].push_back(val);
  }


  //(else) if key already exists, append to the vector value
}

string get(string key, int timestamp) {
  //use BST to to find correct timestamp
  vector<pair<string,int>> chain = tm[key];
  int left = 0;
  int right = chain.size()-1;
  int mid;

  while (left<=right){
    mid = left - (right-left)/2;
    if(chain[mid].second == timestamp){
      return chain[mid].first;
    }
    //check LHS
    if(timestamp <chain[mid].second){
      right = mid-1;
    }
    else if(timestamp > chain[mid].second){
      left = mid+1;
    }
  }
  //in the event you cant find the timestamp, return the largest
  return chain[chain.size()-1].first;
    
}



//passes 44/46 test cases, the hashmap is not properly being populated or it is being populated but not being accessed correctly
//Doesnt make too much sense as its passing the first 44 cases which indicates the hashmap and binary search are working accordingly
//Could be something to do with memory, will retry the solution in python to see if it runs into same issues


//https://leetcode.com/problems/time-based-key-value-store/
