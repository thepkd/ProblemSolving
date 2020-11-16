void moveZeros(vector<int> arr)
{
    int len= arr.size();
    int count=0; int j=0;
    for(auto i=0; i<len; i++)
    {
        if(arr[i]==0)
        {count++;}
        else
        {
            arr[j]= arr[i];
            j++;
        }
        
    }
    for(auto k=len-count-1; k<len; k++)
        arr[k]=0;

}