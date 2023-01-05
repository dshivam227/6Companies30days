// Link: https://leetcode.com/problems/course-schedule/description/


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            vector<int> indegre(numCourses,0);
            vector<vector<int>> adj(numCourses);
            
            for(int i=0;i<prerequisites.size();i++){
                    indegre[prerequisites[i][1]]++;
                    adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            }


            
            queue<int>q;
            
            for(int i=0;i<indegre.size();i++)
            {
                    if(indegre[i]==0)
                            q.push(i);
            }
             
            vector<int> visited(numCourses,0);
            while(!q.empty()){
                    int cur=q.front();
                    q.pop();
                   
                    visited[cur]=1;
                    for( int i=0;i<adj[cur].size();i++){
                            indegre[adj[cur][i]]--;
                            if(indegre[adj[cur][i]]==0)
                                    q.push(adj[cur][i]);
                    }
            }
            for(int i=0;i<visited.size();i++){
                    // cout<<visited[i];
                    if(visited[i]==0)
                            return false;
            }
            return true;
        
    }
};