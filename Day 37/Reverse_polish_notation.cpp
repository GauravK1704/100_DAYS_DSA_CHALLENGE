
class Solution {
    public:
    int operate(int a, int b , string token){
        if(token=="+"){
            return a+b;
        }
         if(token=="-"){
            return a-b;
        }
         if(token=="*"){
            return a*b;
        }
          if(token=="/"){
            return a/b;
        }
        return {};
    }
        int evalRPN(vector<string>& token) {
            
            int n=token.size();
            stack<int> st;
            for(string & token: token){
                if(token =="+" ||token =="-" || token =="*" ||token =="/" ){
                    int b= st.top();
                    st.pop();
                    int a= st.top();
                    st.pop();
                     int result = operate(a , b , token);
                st.push(result);
                }
                else{
                    st.push(stoi(token));
                }
               
            }
            return st.top();
    
        }
    };