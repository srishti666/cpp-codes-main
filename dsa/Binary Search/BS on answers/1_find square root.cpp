//question:
//Brute-force-> TC: O(n)

class Solution {
    public:
      int floorSqrt(int n) {
          int ans = 0;
          for(int i=0; i<=n; i++){
              long long val = i*i;
              //one l l
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

  //another brute force solution
  class Solution {
    public:
      int floorSqrt(int n) {
        int i=1;
        while(i*i <= n){
            i++;
        }
        return i-1;
      }
    }

