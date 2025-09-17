class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            vector<vector<int>> ans;
            int i,j,k;
            for(i=0; i<n; i++){
                j=i+1 ,k=n-1;
                
                   if(i>0 && nums[i]==nums[i-1]){
                    continue;
                   }
                while(j<k){
                    int sum = nums[i]+nums[j]+nums[k];
    
                    if(sum<0){
                        j++;
                    }
                    else if(sum>0){
                        k--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[k]});
    
                        while(j<k && nums[j]==nums[j+1])j++;
                        
                        j++;
                        
                    }
                }
            }
    
            return ans;
        }
    };