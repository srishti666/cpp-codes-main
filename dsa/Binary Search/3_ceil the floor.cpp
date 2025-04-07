//question: https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

//find lower as well as upper bound


class Solution {
    public:
      vector<int> getFloorAndCeil(int x, vector<int> &arr) {
          vector<int> ans;
          int n = arr.size();
          int floor = -1;
          int ceil = -1;
  
          sort(arr.begin(), arr.end());
          for(int i=0; i<n; i++){
              if(arr[i] <= x){
                  floor = arr[i]; 
              } 
              if(arr[i] > x){
                  ceil = arr[i]; 
                  break;
              } 
              if(arr[i] == x) return {x, x};
          }
          ans.push_back(floor);
          ans.push_back(ceil);
          return ans;
          
      }
  };