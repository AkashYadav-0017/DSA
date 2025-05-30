
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int j=0;j<n;j++){
            int start=0;
            int end=n-1;
            while(start<end){
                swap(mat[start][j],mat[end][j]);
                start++;
                end--;
            }
        }
    }
};
