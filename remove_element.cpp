// val là 1 số, nếu trong mảng có val thì xóa
// return mảng nums sau khi xóa, và size
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                a.push_back(nums[i]);
            }}
            nums = a;
            return a.size();
    }
};
