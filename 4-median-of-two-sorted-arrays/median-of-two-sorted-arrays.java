class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length;
        int n=nums2.length;
        int i=0;
        int j=0;
        int k=0;
        int[] res = new int[m+n];
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res[k++]=nums1[i];
                i++;
            }
            else{
                res[k++]=nums2[j];
                j++;
            }
        }
        while(i<m){
            res[k++]=nums1[i];
            i++;
        }
        while(j<n){
            res[k++]=nums2[j];
            j++;
        }
        if(k%2!=0){
            return res[k/2];
        }
        else{
            int a=res[k/2];
            int b=res[(k-1)/2];
            return (a+b)/2.0;
        }

    }
}