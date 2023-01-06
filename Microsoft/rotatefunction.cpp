class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
     long long int sum=0,original=0;
     for(long long int i=0;i<nums.size();i++){
         sum+=nums[i];
         original=original+i*nums[i];
     }
     long long int maximum=original;
     for(long long int i=nums.size()-1;i>=0;i--){
         original=original+sum-(nums[i]*nums.size());
         maximum=max(original,maximum);
     } 
     return maximum;  
    }
};
