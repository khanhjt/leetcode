// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int trai=0;
        int phai=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[trai])>abs(nums[phai])){
                res[i] = nums[trai]*nums[trai];
                trai++;
            } else{
                res[i] = nums[phai]*nums[phai];
                phai--;}
        }
        return res;
    }
};
