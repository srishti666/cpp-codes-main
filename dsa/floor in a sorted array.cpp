//question: https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

//TC: O(n)
class Solution {
    public:
  
      int findFloor(vector<int>& arr, int x) {
          int n = arr.size();
          int floor = -1;
  
          for(int i=0; i<n; i++){
            if(arr[i] <= x)
                floor = i;
            else break;
            }
            return floor;
      }
  };