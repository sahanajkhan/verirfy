class Solution {
public:
    void dfs(vector<int>&visited, int node,  vector<vector<int>>& graph){
    
     visited[node] =1;
     for(auto it: graph[node]){
        if(visited[it] != 1){
            dfs(visited ,it, graph);
        }
        
     }
   };
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>graph(n); 
        for(auto it : invocations){
             graph[it[0]].push_back(it[1]); 
        }
        vector<int>visited(n,0);
        
        dfs(visited , k,graph);
        
        vector<int>remain;
        
        for(auto it : invocations){
            int u = it[0];
            int v = it[1];
            if(visited[u] == 0 && visited[v] == 1){
               vector <int> sk;
              for(int i=0;i<n;i++) sk.push_back(i);
                return sk;
            }
        }
        
        for(int i =0; i<n; i++){
            if(visited[i] != 1){
                remain.push_back(i);
            }
        }
        return remain;
    }
};