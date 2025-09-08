class Solution {
    public:
        int majorityElement(vector<int>& nums) {
           int n=nums.size();
           int i,j;
           for(i=0; i<=n-1; i++){       ///Selection sort
               for(j=i+1; j<n; j++){
                  if(nums[i]<nums[j]){
                    nums[i]=nums[i]+nums[j];
                    nums[j]=nums[i]-nums[j];
                    nums[i]=nums[i]-nums[j];
                  } 
               }
           }
           return nums[n/2];
        
        } 
         
    };