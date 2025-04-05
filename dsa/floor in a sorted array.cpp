//question: 

//TC: O(n)
class Solution {
    public:
  
      int findFloor(vector<int>& arr, int x) {
          int n = arr.size();
  
          for(int i=0; i<n; i++){
              if(arr[i] >= x);
              return i;
          }
          return n;
      }
  };