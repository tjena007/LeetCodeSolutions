string sortSentence(string s) {

        const int NUM = 10;
        string arr[NUM];

        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i+1] == ' ' || s[i+1]=='\0'){
                int val = s[i] - '0';
                arr[val] = word;
                word = "";
                i++;
            }
            else{
                word+= s[i];
            }
        }

        string ans="";

        for(int i=1;i<NUM;i++){
            if(arr[i] != ""){
             ans+=arr[i]+ ' ';
            }
        }

        return ans.substr(0, ans.size()-1);
    }
};