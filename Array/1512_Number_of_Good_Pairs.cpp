class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        vector<int> hash(101, 0); 
        int count = 0;
        
        for(int i=0; i<nums.size(); i++)
            hash[nums.at(i)]++;
        
        for(int j=0; j<hash.size(); j++)
            count += (hash[j]*(hash[j]-1))/2;
        
        return count;
    }
    
};