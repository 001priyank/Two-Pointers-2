class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int highFirst = m-1, highOfFirstEnd=m+n-1;
        int highSecond = n-1;
        
        while(highFirst>=0 && highSecond>=0){
            cout<<highFirst<< " "<<highOfFirstEnd<< " "<<highSecond<< endl;
            
            if(nums1[highFirst] < nums2[highSecond]) {
                
                nums1[highOfFirstEnd] = nums2[highSecond];
                highSecond--;
            }
            else {
                
                nums1[highOfFirstEnd] = nums1[highFirst];
                highFirst--;
            }
            highOfFirstEnd--;
        }
       
        while(highSecond>=0){
            nums1[highOfFirstEnd] = nums2[highSecond];
            highOfFirstEnd--;
            highSecond--;
            
        }        
    }
};
