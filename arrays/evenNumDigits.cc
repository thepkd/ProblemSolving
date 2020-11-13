int evenNumDigits(vector<int> nums)
{
    int count=0;
    for(auto it = nums.begin(); it!=nums.end(); nums++)
    {
        if(
            ((*it)/10>0 && (*it)/100==0) || 
            ((*it)/1000>0 && (*it)/10000==0) || 
            ((*it)==100000)             
            )
            count++;
    }
    return count;
}