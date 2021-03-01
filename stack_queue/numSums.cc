class Solution {
	public:
		    int findTargetSumWays(vector<int> nums, int S){
			        int curSum=0;
				    int yesses = 0;
				        vector<vector<int>> memoSum(nums.size(), vector<int> (2000,INT_MIN));
					    yesses = pushAndCheck(0, nums, curSum, S, memoSum);
					        return yesses;
		    }

		        int pushAndCheck(int level, vector<int> nums, int curSum, int& target, vector<vector<int>>& memoSum){

				    if(level == nums.size())
					        {
							        if(curSum==target)
									        return 1;
								        else
										        return 0; 
									    }
				        else{
						        if(memoSum[level][curSum+1000] != INT_MIN)
								            return memoSum[level][curSum + 1000];
							    }
					    
					    
					    int  plus = pushAndCheck(level+1, nums, curSum + nums[level], target, memoSum);
					        
					        int minus = pushAndCheck(level+1, nums, curSum - nums[level], target, memoSum);
						    
						    memoSum[level][1000 + curSum] = plus + minus;
						        return plus + minus;
							    }
			    
};
