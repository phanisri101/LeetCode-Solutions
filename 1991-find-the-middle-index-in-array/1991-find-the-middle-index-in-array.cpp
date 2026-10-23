class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int ts=0;
        for(int i=0;i<n;i++){
            ts+=nums[i];
        }
        int ls=0;
        for(int i=0;i<n;i++){
            int rs=ts-ls-nums[i];
            if(ls==rs){
                return i;
            }
            else{
                ls+=nums[i];
            }
        }
        return -1;
        
    }
};