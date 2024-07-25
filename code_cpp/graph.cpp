// number of islands -> bfs and dfs

#include <vector>
#include <iostream>

class Solution {
public:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c) {
        // If the current cell is out of bounds or is water, return
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == '0') {
            return;
        }

        // Mark the cell as visited by setting it to '0'
        grid[r][c] = '0';
        // Visit all adjacent cells (up, down, left, right)
        dfs(grid, r - 1, c);
        dfs(grid, r + 1, c);
        dfs(grid, r, c - 1);
        dfs(grid, r, c + 1);
    }

    int numIslands(std::vector<std::vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }

        int island_count = 0;

        for (int r = 0; r < grid.size(); ++r){
            for (int c = 0; c < grid[0].size(); ++c){
                if (grid[r][c] == '1') {
                    // Start a DFS to mark the entire island
                    dfs(grid, r, c);
                    // Increment the island count
                    ++island_count;
                }
            }
        }

        return island_count;
    }
};

int main() {
    Solution solution;

    std::vector<std::vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };

    std::cout << "Number of islands: " << solution.numIslands(grid) << std::endl;  // Output: 1

    return 0;
}
