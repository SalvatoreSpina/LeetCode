class Solution {

    vector<vector<int>> list;

    int dfs(vector<bool>& hasApple, int node, int d, int prev) {

        int result = 0, temp;
        for (int &i : list[node]) {
            if (i != prev) {
                temp = dfs(hasApple, i, d + 1, node);
                if (temp)
                    result += temp - d;
            }
        }
        return result || hasApple[node] ? result + d : 0;
    }
    
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {

        list.resize(n);
        for (const vector<int> &node : edges) {
            list[node[0]].push_back(node[1]);
            list[node[1]].push_back(node[0]);
        }
        return dfs(hasApple, 0, 0, -1) * 2;
    }
};