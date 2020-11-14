int removeFromSorted( vector<int> nums, int val)
{
    int length = nums.size();
    if(length==1)
        return 1;
    for(auto i=0; i<length; i++)
    {   
        if(i!=length-1)
        {
            int temp = nums[i];
            int j =i+1;
            while(j!=length)
            {
                if(nums[j]== temp)
                    j++;
                else
                    break;
                
            }
            int offset= j-i-1;
            if(j!=i+1)
            {
                for(int k=i+1; k<length-offset; k++)
                {
                    nums[k] = nums[k+offset];
                }
                length = length - offset;
            }

        }   
    }
    return length;
}