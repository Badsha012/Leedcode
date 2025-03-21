class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            int diff=INT_MAX;
            int ans=0;
         sort(nums.begin(), nums.end());
     for(int i=0;i<nums.size()-2;i++){
         int low=i+1;
         int high=nums.size()-1;
         int first=nums[i];
         while(low<high){
             if(first+nums[low]+nums[high]==target){
                 return target;
             }
             else if(abs(first+nums[low]+nums[high]-target)<diff){
                 diff=abs(first+nums[low]+nums[high]-target);
                 ans=first+nums[low]+nums[high];
             }
             if(first+nums[low]+nums[high]<target){
                 low++; 
             }
            else{ high--;
                }
         }
     }              
            return ans;
        }
    };