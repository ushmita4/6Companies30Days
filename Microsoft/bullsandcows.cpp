class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int x=0,y=0;
        string s="";
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i])
            x++;
            else{
                mp1[secret[i]-'0']++;
                mp2[guess[i]-'0']++;
            }
        }
        for(auto it:mp1){
            y+=min(mp2[it.first],it.second);
        }
          s=to_string(x)+"A"+to_string(y)+"B";
          return s;
    }
};
