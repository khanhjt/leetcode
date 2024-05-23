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
