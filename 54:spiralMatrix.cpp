class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();
        int total = n*m;
        int count = 0;

        int rowS = 0;
        int rowE = n-1;
        int colS = 0;
        int colE = m-1;

        while(count < total){
            for(int i=colS; i<=colE; i++){
                ans.push_back(matrix[rowS][i]);
                count++;
            }
            rowS++;
            if(count==total) return ans;

            for(int i=rowS; i<=rowE; i++){
                ans.push_back(matrix[i][colE]);
                count++;
            }
            colE--;
            if(count==total) return ans;

            for(int i=colE; i>=colS; i--){
                ans.push_back(matrix[rowE][i]);
                count++;
            }
            rowE--;
            if(count==total) return ans;

            for(int i=rowE; i>=rowS; i--){
                ans.push_back(matrix[i][colS]);
                count++;
            }
            colS++;   
        }
        return ans;
    }
};
