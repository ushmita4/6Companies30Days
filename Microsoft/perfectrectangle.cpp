class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
      map<pair<int,int>,int> mp;
      int c=0;
      int sum=0;
      for(auto points: rectangles){
           mp[{points[0],points[1]}]++;
           mp[{points[2],points[3]}]++;
           mp[{points[0],points[3]}]--;
           mp[{points[2],points[1]}]--;
      } 
      for(auto it:mp){
          sum+=abs(it.second);
      }
      if(sum==4)
      return true;
      else
      return false;
    }
};
