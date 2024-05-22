// Cho một số mảng nhị phân, trả về số lượng tối đa số 1 liên tiếp trong mảng.
// [1,1,1,0,1] -> rt 3
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int cnt=0, ans=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i] == 1)
          cnt++;
        else
          cnt=0;
      }
      ans = max(cnt, 0)
      return ans
    }
};
