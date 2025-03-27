//question: https://leetcode.com/problems/rearrange-array-elements-by-sign/

//TC: O(n+n)   SC: O(1)
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> pos;
            vector<int> neg;
            int n = nums.size();
            for(int i=0; i<n; i++){
                if(nums[i] > 0) pos.push_back(nums[i]);
                else neg.push_back(nums[i]);
            }
    
            for(int i=0; i<n/2; i++){
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            return nums;
        }
    };

//TC: O(n)   SC: O(n)
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n = nums.size();
            vector<int>ans(n,0);
    
            int posIndex = 0, negIndex = 1;
            for(int i=0; i<n; i++){
                if(nums[i] > 0){
                    ans[posIndex] = nums[i];
                    posIndex += 2;
                }
                else {
                    ans[negIndex] = nums[i];
                    negIndex += 2;
                }
            }
            return ans;
        }
    };