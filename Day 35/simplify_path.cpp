class Solution {
    public:
        string simplifyPath(string path) {
            int n=path.size();
            stack<string> st;
            string result;
            int i;
            for(i=0; i<n; i++){
                if(path[i]=='/'){
                    continue;
                }
                string temp;
                while(i<n && path[i]!= '/'){
                    temp+=path[i];
                    i++;
                }
                    if (temp == ".")
                        continue;
                    
                    else if(temp== ".."){
                     if(!st.empty())st.pop();
                        
                      }
                     else
                        st.push(temp);
                     
                    }
            
                    while(!st.empty()){
                        result="/"+st.top()+result;
                        st.pop();
                    }
                  
               
            
              if(result.empty()){
                        return "/";
                    }
             return result;
            
        }
    };