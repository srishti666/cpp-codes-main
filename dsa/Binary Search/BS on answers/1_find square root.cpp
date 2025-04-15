//question:
// TC: O(logn)

class Solution {
    public:
      int floorSqrt(int n) {
          int ans = 0;
          for(int i=0; i<=n; i++){
              long long val = i*i;
              if(val <= n*1ll) {
                  ans = i;
              }
              else {
                  break;
              }
              
          }
          return ans;
      }
  };
