//question:https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array

// TC: O(n^2) SC: O(n)
class Solution {
    public:
      vector<int> leaders(vector<int>& arr) {
          int n = arr.size();
      vector<int> ans;
    
      for (int i = 0; i < n; i++) {
      bool leader = true;
  
      for (int j = i + 1; j < n; j++)
        if (arr[j] > arr[i]) {
            
          // If any element found is greater than current leader
          // curr element is not the leader.
          leader = false;
          break;
        }
  
      if (leader)
      ans.push_back(arr[i]);
  
    }
    
    return ans;
      }
  };