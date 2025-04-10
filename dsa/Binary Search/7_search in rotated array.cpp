//qyestion

//TC: O(n)  brute force-> linear search

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int ind=-1;
            for(int i =0; i<nums.size(); i++){
                if(nums[i] == target) ind = i;
            }
            return ind;
        }
    };


    //optimised solution
    //TC: O(logn)

    class Solution {
        public:
            int search(vector<int>& nums, int target) {
                int n = nums.size();
                int low = 0;
                int high = n-1;
        
                while(low <= high){
                    int mid = (low+high)/2;
        
                    if(nums[mid] == target) return mid;
        
                    if(nums[low] <= nums[mid]){
                        if(nums[low] <= target && target <= nums[mid]) {
                            high = mid - 1;
                        }
                        else low = mid + 1;
                    }
                    else{
                        if(nums[mid] <= target && target <= nums[high]) {
                            low = mid + 1;
                        }
                        else high = mid - 1;
                    }
                }
                return -1;
            }
        };