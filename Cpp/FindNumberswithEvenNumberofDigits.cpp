// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int k=0; //k la bien dem dung de luu lan lap qua so chu so cua nums[]
            while(nums[i]>0){
                int num=nums[i]%10;
                k++;
                //cout<<num;
                nums[i]=nums[i]/10; //chia 10 la de giam di 1 so chu so
            }
            if(k%2==0)
                ans++;
        }        
        return ans;
    }
};
