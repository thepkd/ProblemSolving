
bool checkIfDoulbe(vector<int> nums)
{
    length = nums.size();
    if(length==1)
        return false;
    for(auto i=0; i<length; i++)
    {
        int temp = nums[i];
        for(auto j=0; j<length; j++)
        {
            if(nums[j] == 2*nums[i])
                return true;
        }
    }
    return false;
}