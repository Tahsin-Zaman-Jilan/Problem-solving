class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r){
            
            mid=(l+r)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            
            if(nums[mid]>=nums[l] ){
                
                if(target <= nums[mid] and target>=nums[l] ){
                    
                    r=mid-1;
                } 
                
                else {
                    
                    l=mid+1;
                }
                
                
            }
            
            
            else {
                
                if(nums[mid]<=target  and nums[r]>= target){
                    l=mid+1;
                    
                }
                
                else {
                    r=mid-1;
                    
                }
                
                
                
            }
            
            
            
            
        }
        
        return -1;
        
    }
};