//question: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// TC : O(logn)

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n = nums.size();
            int low = 0;
            int high = n - 1;
            int mini = INT_MAX;

            while(low <= high){
                int mid = (low + high)/2;

                if(nums[low] <= nums[mid]){
                    mini = min(nums[low], mini);

                    low = mid +1;
                }
                
                else(nums[mid] <= nums[high]) {
                    mini = min(nums[mid],mini);

                    high = mid - 1;
                }
            }
            return mini;

        }
    }