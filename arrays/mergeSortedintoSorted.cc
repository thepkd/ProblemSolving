int mergeSortedintoSorted(vector<int> nums1, int m, vector<int> nums2, int n)
{
    for(int i=0; i<n; i++)
    {
        int temp = nums[i];
        for(j=0; j<m+i+1;j++)
        {
            if(j!=m+i)
            {
            if(temp < nums1[j])
            {
                for(k=m+j-1;k>j;k--)
                {
                    nums1[k] = nums1[k-1];
                }
                nums1[j]= temp;
                break;
            }
            }
            else{
                assert(j==m+i);
                nums1[j] = temp;
            }
        }
     } 
}