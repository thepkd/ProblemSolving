vector<int> replaceWithLargest(vector<int> arr)
{
    int len = arr.size();
    for (auto i=0;i<len;i++)
    {
        int temp=INT_MIN;
        if(i!=len-1)
        {
        for (auto j=i+1;j<len;j++)
        {
            if(arr[j]>temp)
                temp =arr[j];
        }
        arr[i] = temp;
        }
        else
        {
            arr[i]= -1;
        }
        
    }
    return arr;
}