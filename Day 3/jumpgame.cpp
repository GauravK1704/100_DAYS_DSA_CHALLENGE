class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int i,n=nums.size(),j=0;
            
           for(i=0; i<n; i++){
            if(j<0){
                return false;
            }
           else if(nums[i]>j){
                j=nums[i];
               
               
            }
             j--;
           }
           return true;
        }
    };