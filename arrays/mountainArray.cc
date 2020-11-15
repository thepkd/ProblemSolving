bool isMountainArray(vector<int> arr)
{
    int len = nums.size();
    if(len<3)
        return false;
    bool peakFlag= false; bool up=false; bool down=false;
    bool inv = false;
        int temp;
        for(auto i = 0 ; i<len; i++)
        {
            if(i==0) 
            { continue;}

            if(nums[i]>nums[i-1]) { up =true; continue;} 
            else if(nums[i]== nums[i-1]) {inv=true; break;}
            else
            {
                if(up!=true) {inv =true; break;}
                peakFlag =true;
                down= true;
                if(i!=len-1)

                {for(auto j=i+1; j<len; j++)
                {
                    if(nums[j] >= nums[j-1])
                        {down=false; inv=true; break;}
                        
                }
                }
            }
            

        }
    
    return (up && down && !inv);    
    
}