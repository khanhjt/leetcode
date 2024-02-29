#  nums[int] = [3, 2, 2, 3], val = 3
# nums[int] = [0,2,2,0]
# cho một mảng số nguyên nums, và 1 số nguyên val. Xóa tất cả các phần tử có giá trị val trong nums.
# Trả về số lượng phần tử sau khi xóa.
# Không cần xóa vật lý các phần tử.
class Solution {
public:
      int removeElement(vector<int>& nums, int val){
        vector<int> a;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums(i) != val){
              a.push_back(nums(i));
              i +=1;}}
        nums = a;
        return i;};
