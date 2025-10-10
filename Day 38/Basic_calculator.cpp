//https://youtu.be/3AEKyHx3tzU?si=cCXdiywfwJPEg_lv
class Solution {
    public:
        int calculate(string s) {
            int n= s.size();
            stack<int> st;
            int number=0;
            int result=0;
            int sign =1;
            for(int i=0; i<n; i++){
                if(isdigit(s[i])){
                    number=number*10+(s[i]-'0');
                    
                }
                else if(s[i]=='+'){
                      result+=(number*sign);           
                    number=0;
                    sign =1;
                }
                else if( s[i]=='-'){
                      result+=(number*sign);           
                    number=0;
                    sign =-1;
                }
                else if(s[i]=='('){
                    st.push(result);
                    st.push(sign);
                    result=0;
                    number=0;
                    sign =1;
                }
                else if(s[i]==')'){
                    result += (number*sign);
                    number=0;
                    int stack_sign=st.top();
                    st.pop();
                    int stack_result=st.top();
                    st.pop();
                    result*= stack_sign;
                    result+= stack_result;
    
                }
            }
            result+=(number*sign);
            return result;
    
    
        }
    };