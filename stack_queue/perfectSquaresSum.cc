int perfectSquaresSum(int n)
{
    vector<int> visited(n,0);
    queue<pair<int,int>> que;
    int ans = INT_MAX;
    if(n<=3) return n;
    que.push(make_pair{n,0}); //Root node
    visited[n]=1;
    while(!que.empty())
    {
        pair<int,int> temp = que.front();
        if(temp.first==0)
        {
            ans=min(ans,temp.second); 
        }
        que.pop();
        int curr = temp.first;
        
        for(i=1; i*i<=curr; i++)
        {
            int path = curr - (i*i);
            if(path>=0 && (!visited[path] || path==0))
                que.push(make_pair(path, temp.second+1));
        }
    }
    return ans;
    
}