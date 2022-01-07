class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(); 
        int n = matrix[0].size();
        
        int i =0, j=n-1;
        while(i<m && j>=0) 
        {            
            int element = matrix[i][j];
            if(element == target){
                return true;
            }
            else if(element > target){
                j--;
            }
            else if(element < target){
                i++;
            }
            
        }
        
        return false;       
        
    }
};

// Complexity : O(M+N)
