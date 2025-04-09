//question: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

//TC: O(N)

class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          int n = arr.size();
          int count = 0;
          
          for(int i=0; i<n; i++){
              if(arr[i] == target){
                  count++;
              }
          }
          return count;
      }
  };
  