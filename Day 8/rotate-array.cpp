class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int i, n=nums.size();
            vector<int> temp(n);
            for (i=0; i<=n-1; i++){
                
                    temp[(i+k)%n]=nums[i];
                
            }
            nums=temp;
            
        }
    };