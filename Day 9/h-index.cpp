class Solution {
    public:
        int hIndex(vector<int>& citations) {
            int n=citations.size();
            int h=0;
            vector<int> temp(n+1,0);
           
            for (int c : citations) {
                if (c >= n)
                    temp[n]++;
                else
                    temp[c]++;
            }
    
        
            for (int i = n; i >= 0; i--) {
                h += temp[i];
                if (h >= i)
                    return i;
            }
            return 0; 
        }
    };