//question: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays


// Time Compleixty : O( (m+n)log(m+n) ) 

class Solution {
    public:
      // a,b : the arrays
      // Function to return a list containing the union of the two arrays.
      vector<int> findUnion(vector<int> &a, vector<int> &b) {
          map<int, int> map;
          vector<int> Union;
          
          for(int i =0; i<a.size(); i++){
              map[a[i]]++;
          }
          for(int i =0; i<b.size(); i++){
              map[b[i]]++;
          }
          
          for(auto &it: map){
              Union.push_back(it.first);
          }
          
          return Union;
      }
  };