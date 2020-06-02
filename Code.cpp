int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        
        int a=0;
        for(int i:nums)  
        {
            a=a+i;//addition of element
            ans=max(ans,a);//maximum function does the if(answer<maxsofar)answer=maxsofar
         
         a=max(a,0);//if(maxsofar<0)maxsofar=0;   
        }
        return ans;
    }
