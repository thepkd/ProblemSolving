int openLock(vector<string>& deadends, string target) {
         int distance= 0;
    queue<string> que;
    set<string> unique;
    auto find0 = find(deadends.begin(), deadends.end(), "0000");
        if(find0 != deadends.end())
            return -1;
        if(target=="0000") return 0;
    que.push("0000");
        unique.insert("0000");
    while(!que.empty())
    {
        int size = que.size();
        
        
        for(auto k=0; k<size; k++)
        {
            
            string temp_string= que.front();
            
            
            for(auto i=0; i<temp_string.size(); i++)
            {
                string mod_string(temp_string);
            string mod_string2(temp_string);
                char c = temp_string[i];
                if(c!='9') c++; else c='0';
                mod_string[i]=c;
                auto find1 = unique.find(mod_string);
                if(find1==unique.end())
                {
                if(mod_string==target)
                {distance++; return distance;}
                else
                {
                auto it = find(deadends.begin(),deadends.end(),mod_string);
                if(it==deadends.end())
                {unique.insert(mod_string); que.push(mod_string);}
                }
                }
                
                c = temp_string[i];
                if(c!='0') c--; else c='9';
                mod_string2[i] = c;
                auto find2 = unique.find(mod_string2);
                if(find2==unique.end())
                {
                if(mod_string2==target){ distance++; return distance;}
                else {
                auto it2 = find(deadends.begin(),deadends.end(),mod_string2);
                if(it2==deadends.end())
                {que.push(mod_string2); unique.insert(mod_string2);}
                }
                }
                cout << distance << endl;
            }
            que.pop();

        }
        distance++;
    }
    return -1;
    
}