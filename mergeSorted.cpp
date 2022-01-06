class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int low=0,highFirst = m-1, highOfFirstEnd=m+n-1;
        int highSecond = n-1;
        
        while(highOfFirstEnd>0 && (highSecond>=0 && highFirst>=0)){
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
            for(auto it:nums1){
                cout<<it<< " ";
            }
            cout<<endl;
        }
        if(highFirst == -1 && m>=0 ){
            int i=0;
            while(i<n){
                nums1[i] = nums2[i];
                i++;
            } 
        }
        
    }
};
