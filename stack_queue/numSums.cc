int numSums(vector<int> nums, int S){
    int curSum=0;
    int yesses = 0;

}

void pushAndCheck(int level){
    if(level == nums.size())
    {
        if(curSum==S)  yesses++;
        return;
        else
        return; 
    }
    
    curSum += nums[level];
    pushAndCheck(level+1)
    curSum -= nums[level];
    curSum += (-nums[level]);
    pushAndCheck(level+1);
    curSum -= (-nums[level]);

    return;
}