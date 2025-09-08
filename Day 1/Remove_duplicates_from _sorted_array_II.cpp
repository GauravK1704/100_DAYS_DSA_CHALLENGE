class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
             int n=nums.size();
                int i=2; 
    if(n<2){
        return n;
    }
        for(int j=2;j<n; j++){
            if(nums[j] != nums[i-2]) {
                
                nums[i]=nums[j];
          i++;
            }
            
        }
    
    return i;
        }
    };