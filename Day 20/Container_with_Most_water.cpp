class Solution {
    public:
        int maxArea(vector<int>& height) {
            int MW=0 , n=height.size();
            int lp=0 , rp=n-1 ,i;
            while(lp<rp){
                int wt=rp-lp;
                int ht=min(height[lp],height[rp]);
                int cw=wt*ht;
                MW=max(MW,cw);
                if(height[lp]>height[rp]){
                    rp--;
                }
                else{
                    lp++;
                }
            }
            return MW;
        }
    };