// question: https://leetcode.com/problems/missing-number/

TC: O(n^2)
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            for(int i=0; i<=n; i++){
                int flag = 0;
    
            for(int j = 0; j<n; j++){
                if(nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return i;
            }
            return -1;
        }
    };

    // solution 2: TC: O(N) + O(N) ~ O(2*N)

    #include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);

        for(int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for(int i = 0; i <= n; i++) {
            if(hash[i] == 0) return i;
        }
        return -1;
    }
};
    
    