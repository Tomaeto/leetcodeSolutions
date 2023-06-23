class Solution {
public:
    //88. Merge Sorted Array

    //Given to arrays nums1 and nums2, and integers m and n representing size of respective arrays,
    //  merges nums2 into nums1 in non-decreasing order
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Pointers for tracking elements in nums1 and nums2, starting from the end
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            //If nums2 element is larger, place element into end of nums1
            if (nums1[i] < nums2[j]) 
                nums1[k--] = nums2[j--];
            //else move nums1 element to end of array
            else
                nums1[k--] = nums1[i--];
        }
        //Insert remaining elements from nums2 into nums1
        while (j >= 0)
            nums1[k--] = nums2[j--];
     }
};
