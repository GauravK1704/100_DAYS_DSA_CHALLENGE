class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            int n=nums.size();
            unordered_map<int ,int> map;
            int i,j;
            for(i=0; i<n; i++){
                
                if(map.find(nums[i])!=map.end()){
                    j=map[nums[i]];
                
                if((i-j)<=k){
                    return true;
                 }
                }
                map[nums[i]]=i;
            }
            return false;
            
        }
    };