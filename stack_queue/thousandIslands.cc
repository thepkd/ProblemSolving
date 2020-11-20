int thousandIslands(vector<vector<char>> grid)
{
    int len = grid.size();
    int wid = grid[0].size();
    const vector<bool> filler(wid,false);
    vector<vector<bool>> checked(len,filler);
    Queue<std::pair<int,int>> que;
    int island_count=0;

    for(auto i=0; i<len; i++)
    {
        for(auto j=0;j<wid; j++)
        {
            if(checked[i][j]==false && grid[i][j]=='1')
            {
                island_count++;
                checked[i][j]= true;
                que.push(std::make_pair(i,j));
                while(!que.empty())
                {
                    int size= que.size();
                    for(auto k=0;k<size;k++)
                    {
                        std::pair<int,int> temp_pair = que.front();
                        que.pop();
                        int x_coord = temp_pair.first;
                        int y_coord = temp_pair.second;
                        if(x_coord-1>=0)
                        {
                            if(grid[x_coord-1][y_coord]=='1' && checked[x_coord-1][y_coord]==false)
                            {
                                checked[x_coord-1][y_coord] = true;
                                que.push(std::make_pair(x_coord-1,y_coord));
                            }
                        }
                        if(x_coord+1<len)
                        {
                            if(grid[x_coord+1][y_coord]=='1' && checked[x_coord+1][y_coord]==false)
                            {
                                checked[x_coord+1][y_coord] = true;
                                que.push(std::make_pair(x_coord+1,y_coord));
                            }
                        }

                        if(y_coord-1>=0)
                        {
                            if(grid[x_coord][y_coord-1]=='1' && checked[x_coord][y_coord-1]==false)
                            {
                                checked[x_coord][y_coord-1] = true;
                                que.push(std::make_pair(x_coord,y_coord-1));
                            }
                        }

                        if(y_coord+1<wid)
                        {
                            if(grid[x_coord][y_coord+1]=='1' && checked[x_coord][y_coord+1]==false)
                            {
                                checked[x_coord][y_coord+1] = true;
                                que.push(std::make_pair(x_coord,y_coord+1));
                            }
                        }

                    }
                }
            }
        }
    }
return island_count;
}