class Solution {

    int target;
    vector<vector<int>> answ;
    vector<int> path;

    void dfs(vector<vector<int>>& graph, int currentNode = 0) {
        path.push_back(currentNode);
        if (currentNode == target)
            answ.push_back(path);
        else for (int &node : graph[currentNode])
            dfs(graph, node);
		path.pop_back();
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size() - 1;
        dfs(graph);
        return answ;
    }
};