class Solution {
    public:
        bool isPalindrome(string s) {
            int n=s.size();
            int i=0 , j=n-1;
            while(i<j){
                while(i<j && !isalnum(s[i])) i++; //Skip all comma and spaces 
                 while(i<j && !isalnum(s[j])) j--;
                if(tolower (s[i])!=tolower(s[j])){  //convert all uppercases into lowercase
                    return false;
                }
                i++;
                j--;
            }
            
            return true;
        }
    };