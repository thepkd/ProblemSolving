int removeElement(vector<int> nums, int val)
{
 int len = nums.size();
 if(len==1 && nums[len]==val)
 return 0;
 for(auto i=0; i<len; i++)
 {
     if(nums[i]==val)
     {
         for(auto j=i;j<len-1;j++)
         {
         nums[i] = nums[i+1];
         len--;
         }
     }
 }


}