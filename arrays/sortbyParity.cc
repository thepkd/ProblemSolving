void sortByParity(vector<int> arr)
{
    int len= arr.size();
    if(len<2) return;

    int even=0; int odd=0;
    for(auto i=0; i<len-odd; )
    {
        if(arr[i]%2==0)
        {
            even++;
            i++;
        }
        else
        {
            int temp = arr[len-1-odd]
            arr[len-1-odd] = arr[i];
            arr[i] = temp;
            odd++;
        }
    }
  return arr;  
}