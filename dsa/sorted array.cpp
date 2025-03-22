//question: https://leetcode.com/problems/sort-colors/description/

//TC: O(N) + O(N)  SC: O(1)
//First O(N) for counting the number of 0’s, 1’s, 2’s, and second O(N) for placing them correctly in the original array.
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int count_0 = 0;
            int count_1 = 0;
            int count_2 = 0;
    
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0) count_0++;
                else if(nums[i] == 1) count_1++;
                else count_2++;
            }
    
            for(int i=0; i<count_0; i++)
                nums[i] = 0;
            
            for(int i=count_0; i<count_0 + count_1; i++)
                nums[i] = 1;
            for(int i=count_0 + count_1; i<nums.size(); i++)
                nums[i] = 2;
           
        }
    };
    
    