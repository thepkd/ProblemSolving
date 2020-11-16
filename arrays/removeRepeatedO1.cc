int removeRepeatedO1(vector<int> arr)
{
    int len = arr.size();
    if(len==1) return 1;
    int temp; int j=0;
    for(auto i=0;i<len; i++)
    {
        if(i==0)
        {
            j++;
           temp= arr[i]; 
           continue;
        }
        else
        {
            if(arr[i] == temp)
               continue; 
            else
            {
                arr[j]= arr[i];
                temp = arr[i];
                j++;
            }
        }
        
    }
    return j;
}