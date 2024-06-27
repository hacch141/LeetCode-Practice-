// 1791. Find Center of Star Graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges.size() == 1) return edges[0][0];
        return (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) ? edges[0][0] : edges[0][1];
    }
};
