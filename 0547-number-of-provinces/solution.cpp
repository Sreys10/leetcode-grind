class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        //we will create vector to store visited or not
        int n=isConnected.size();
        int count=0;
        vector<bool> visited(n, false);
        for(int i=0; i<n;i++){
            if(!visited[i]){
                count++;
                dfs(isConnected, visited, i);  //calling dfs
            }
        }
        return count;
    }

    //dfs function
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int node){
        visited[node]= true;    //update the node
        for (int i=0; i<isConnected.size(); i++){
            if(isConnected[node][i]==1 && !visited[i]){     //==1 means there is presence of edge
                dfs(isConnected, visited, i);    //recursive calling
            }
        }
    }
};
