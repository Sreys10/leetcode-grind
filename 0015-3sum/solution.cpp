class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i=0; i<nums.size(); i++){
        if (i>0 && nums[i]==nums[i-1]) continue;

        int left=i+1;
        int right= nums.size()-1;


        while(left<right){
            int sum=nums[right]+nums[i]+nums[left];
            if (sum==0){
                result.push_back({nums[i],  nums[left],nums[right]});

                //skip the duplicates
                while(left<right && nums[right]==nums[right-1]) right--;
                while (left<right && nums[left]==nums[left+1]) left++;

                //move the pointers
                left++;
                right--;
            }else if(sum<0){
                //increase the sum
                left++;
            }else{
                //decrease the sum
                right--;
            }

        }
                   

    }
                return result;
}
    
};
