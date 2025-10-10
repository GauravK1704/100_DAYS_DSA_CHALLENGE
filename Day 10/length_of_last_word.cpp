class Solution {
    public:
        int lengthOfLastWord(string s) {
            int i,n=s.size();
            int c=0,flag=0;
            for(i=n-1; i>=0; i--){
                if(s[i]==' ' && flag){
                    break;
                }
                 
                else if(s[i]!=' '){
                    flag=1;
                       c++;
                }  
            }
            return c;
        }
    };