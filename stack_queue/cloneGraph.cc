Node* cloneGraph(Node* node)
{
    if(node == NULL)
    return NULL;

    Node* new_node = new Node(node->val);
    visited[node->val] = new_node;

    for(auto it=node->neighbours.begin(); it!=node->neighbours.end();it++)
    {
        auto it_child = visited.find((*it)->val);
        if(it_child!=visited.end())
            {
                new_node->neighbours.push_back((*it_child)->second);
            }

        else
        {
            auto child = cloneGraph(*it);
            new_node->neighbours.push_back(child);                
        }
        

    }

return new_node;
}
map<int,Node*> visited;