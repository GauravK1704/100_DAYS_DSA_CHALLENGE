class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int n=nums.size();
            int i=0;
            int j=0,sum=0;
            int total=INT_MAX;
            while(j<n){
                sum +=nums[j];
                
            while(sum>=target){
                total=min(total,j-i+1);
                sum-=nums[i++];
            }
            j++;
    
            }
            if(total==INT_MAX){
                return 0;
            }
            return total;
        }
    };