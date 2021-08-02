class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ct=0; int j;
        
        for(int i=0; i < items.size(); i++)
        {   
            if(ruleKey=="type")
                j = 0;
            else if(ruleKey=="color")
                j = 1;
            else if(ruleKey=="name")
                j = 2;
            

                if(items[i][j]==ruleValue)
                    ct++;
        }      
        return ct;
    }
};