void duplicateZeros(vector<int> nums)
{
    int size;
    size = nums.size();
    if(size>1)
    {
    for(int i=0; i<size; )
    {
        if(nums[i]==0)
            {
                if(i!=size-1)
                {
                for(int j=size-1;j>i+1;j--)
                {
                    nums[j] = nums[j-1];
                }
                nums[i+1] = 0;
                i+=2;
                }
                else  i+=1;
            }
        else i+=1;
    }
    }
}