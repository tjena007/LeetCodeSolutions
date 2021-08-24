class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            if(nums.at(i)%2 == 0)
                ans.push_back(nums.at(i));
        }
        
        for(int i=0; i<nums.size(); i++){
            if(nums.at(i)%2 != 0)
                ans.push_back(nums.at(i));
        }
        return ans;
    }
};
