//question:https://leetcode.com/problems/majority-element/description/

//TC: O(nlogn) + O(n)  hashing insertion-O(logn) for n elements -> nlogn + O(n) ->for again traversing
//SC: o(n) exrta space

class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n = nums.size();
            unordered_map<int, int> map;
    
            for(int i=0; i<n; i++){
                    map[nums[i]]++;
                
            }
            for(auto it: map){
                if(it.second>n/2)
                    return it.first;
            }
            return 0;
        }
    };