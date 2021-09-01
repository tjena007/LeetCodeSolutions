class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int ans=0;
        
        int count=1;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if(count%2!=0){
                    ans+=sum;
                }
                count++;
            }
            count = 1;
        }
        return ans;
    }
};