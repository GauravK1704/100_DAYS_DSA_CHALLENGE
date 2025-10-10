class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int>productArr(nums.size(),0);
            int product=1; // stores the product of all the elements of [nums] array. 
            int isZero=0; // check whether there are any zeroes in the [nums] array
            int countZero=0; // no of zeroes in the [nums] array.
            for(int i=0;i<nums.size();i++){
                //skipping zeroes, not including it in product variable.
                if(nums[i]==0){
                    isZero=1;//flag -> there are zeroes in the [nums] array. 
                    countZero++;
                    continue;// skip the zero element.
                }
                product=product*nums[i];
            
            }
             
            // if there is no zero element in the array.
            if(!isZero){
                for(int i=0;i<nums.size();i++){
                    productArr[i]=product/nums[i];
                   
                }
                 return productArr;
            }
            //if there are 1 or more zero elements in the [nums] array.
            else{
               
                for(int i=0;i<nums.size();i++){
                    //if there are two zeroes like -> [1,2,3,0,0,5,6,7] , then the result will always be an array like [0,0,0,0,0,0,0,0]
                    if(countZero>1)return productArr;
                    // if there is only 1 zero , [1,2,3,4,0] then the result will be [0,0,0,0,24].
                    if(nums[i]==0){
                        productArr[i]=product;
                    }
                    
                }
               
            } 
             return productArr;
        }
    };