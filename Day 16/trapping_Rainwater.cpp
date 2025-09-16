class Solution {
    public:
        int trap(vector<int>& height) {
            int n=height.size();
            vector<int> Lmax(n,0);
              vector<int> Rmax(n,0);
              int i;
              int ans=0;
              Lmax[0]=height[0];
              Rmax[n-1]=height[n-1];
              for(i=1;i<n; i++){
                Lmax[i]=max(Lmax[i-1],height[i]);
              }
            
            for(i=n-2;i>=0; i--){
                Rmax[i]=max(Rmax[i+1],height[i]);
              }
              for(i=0; i<n-1; i++){
                ans += min(Lmax[i],Rmax[i])-height[i];
              }
              return ans;
    
        }
    };