vector<int > sortSquare(vector<int> nums)
{
    for(auto it = nums.begin(); it!=nums.end(); it++)
    {
        (*it) = (*it)*(*it);
    }
    std::sort(nums.begin(),nums.end());
    return nums;
}