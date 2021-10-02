vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int j,k;
        int sum;
        for(int i=0;i<nums.size();i++){
            //固定第一个数字 
            //去重第一个数字
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        res.push_back(tmp);
                        //第二个数字去重
                        while(++j<k && nums[j]==nums[j-1]){
                        }
                    }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return res;
        
    }
