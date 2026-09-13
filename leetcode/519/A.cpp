vector<vector<int>> ans(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                // 1. Row shift: move left
                int nj = (j - rowShift[i] + n) % n;

                // 2. Column shift: move upward
                int ni = (i - colShift[nj] + n) % n;

                ans[ni][nj] = grid[i][j];
            }
        }

        return ans;
