int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int j,k;
        int sum,gap;
        int diff=INT_MAX;
        int res;
        for(int i=0;i<nums.size();i++){
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                gap=abs(sum-target);
                if(gap<diff){
                        diff=gap;
                        res=sum;
                }
                if(sum==target){
                    return sum;
                    }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return res;
        
    }
