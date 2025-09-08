#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;
class Solution {
    public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
           int i,j=1; 

   while(j<n){
       if(nums[i] != nums[j]) {
           i++;
           nums[i]=nums[j];
       }
       else{
           j++;
       }
   }

return i+1;


        }
    };