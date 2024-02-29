// nums1, nums2 là 2 mảng số nguyên ko giảm . m, n lần lượt là số lượng ptu của 2 mảng
// tạo 1 mảng để gộp 2 mảng và sắp xếp theo thứ tự ko giảm
// lưu mảng đó là nums1, nums1 có độ dài là m+n trong đó m là sl ptu của mảng 1, n ptu cuối toàn 0
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        vector<int> resum;
        int id1=0;
        int id2=0;
        while(id1 < m && id2<n){
            if(nums1[id1] < nums2[id2]){
                resum.push_back(nums1[id1]);
                id1+=1;
            }
            else{
                resum.push_back(nums2[id2]);
                id2+=1;
            }
        }
        while(id1<m){
            resum.push_back(nums1[id1]);
            id1+=1;
        }
        while(id2<n){
            resum.push_back(nums2[id2]);
            id2+=1;
        }
        for(int i=0;i<resum.size();i++){
            nums1[i] = resum[i];
        }
    }
};