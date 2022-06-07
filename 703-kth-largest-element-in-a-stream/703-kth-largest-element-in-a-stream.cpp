class KthLargest {
public:
    
     priority_queue<int,vector<int>,greater<int>>pq;
        int len;
    KthLargest(int k, vector<int>& nums) {
        
       len=k;
        int size=nums.size();
        for(int i=0;i<size;i++){
            pq.push( nums[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
            
            
        }
        
        
        
    }
    
    int add(int val) {
        pq.push(val);
         if(pq.size()>len){
                pq.pop();
            }
         return pq.top();
    }
    
   
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */