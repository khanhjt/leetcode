# nums1, nums2 là 2 mảng số nguyên ko giảm . m, n lần lượt là số lượng ptu của 2 mảng
# tạo 1 mảng để gộp 2 mảng và sắp xếp theo thứ tự ko giảm
#lưu mảng đó là nums1, nums1 có độ dài là m+n trong đó m là sl ptu của mảng 1, n ptu cuối toàn 0
class Solution:
    def merge(self, nums1, m, nums2, n):
        nums1[m:] = nums2
        nums1.sort()
        ##return nums1
    
