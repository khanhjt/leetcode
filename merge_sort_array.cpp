// cho 2 mảng nums1 và nums2 có kích thước m,n. 2 mảng này ko tăng dần. 
// gộp 2 mảng lại sao cho các gtri ko giảm
// trả về nums1 là mảng sau khi gộp.
// ý tưởng:  dùng 1 vector vt để lưu các giá trị mảng được sắp xếp, sau đó đổ lại cho nums1.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> vt; 
        int id1=0; 
        int id2=0;
        while(id1<m && id2<n){
            if(nums1[id1]<nums2[id2]){
                vt.push_back(nums1[id1]);
                id1++;
            }
            else{
                vt.push_back(nums2[id2]);
                id2++;
            }
        }
        while(id1<m){
            vt.push_back(nums1[id1]);
            id1++;
        }
        while(id2<n){
            vt.push_back(nums2[id2]);
            id2++;
        }
        for(int i=0; i<vt.size();i++){
            nums1[i]=vt[i];
        }
    }
};
