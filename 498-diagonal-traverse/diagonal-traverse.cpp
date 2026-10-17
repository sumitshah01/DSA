class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> result;

        for (int d = 0; d < m + n - 1; d++) {
            vector<int> diagonal;

            int r = (d < n) ? 0 : d - n + 1;
            int c = (d < n) ? d : n - 1;

            while (r < m && c >= 0) {
                diagonal.push_back(mat[r][c]);
                r++;
                c--;
            }

            if (d % 2 == 0) {
                reverse(diagonal.begin(), diagonal.end());
            }

            for (int val : diagonal) {
                result.push_back(val);
            }
        }

        return result;
    }
};