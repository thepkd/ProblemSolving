int maxConcsecutiveOnes(vector<int> array)
{
    int temp=0;
    int max=0;
    for(auto it = array.begin(); it!=array.end();it++)
    {
        if((*it)==1)
        {
            temp++;
        }
        else if((*it)==0)
        {
            if(temp>max) max=temp;
            temp=0;
        }
    }
    if(temp>max) max=temp;
    return max;
}