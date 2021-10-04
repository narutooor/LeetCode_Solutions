vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>> res;
        int k,g;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            //去重复i
            if(i>1 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                //去重复j
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                k=j+1;
                g=nums.size()-1;
                while(k<g){
                    sum=0;
                    sum=sum+nums[i];
                    sum=sum+nums[j];
                    sum=sum+nums[k];
                    sum=sum+nums[g];
                    if(sum==target){
                        res.insert({nums[i],nums[j],nums[k],nums[g]});
                        //去重复k g
                        //++k --g 
                        while(++k<g && nums[k]==nums[k-1]){
                        }
                        while(g-->k && nums[g]==nums[g+1]){
                        }
                    }
                    else if(sum>target){
                        g--;
                    }
                    else{
                        k++;
                    }
                }
        }
        }
        vector<vector<int>> res1;
        //集合转vector
        res1.assign(res.begin(), res.end());
        return res1;
        
    }
