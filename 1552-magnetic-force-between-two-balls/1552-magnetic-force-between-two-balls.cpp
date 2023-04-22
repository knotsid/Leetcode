class Solution {
public:
    bool isPossible(vector<int> &position, int k, int mid){
    int magCount = 1;
    int lastPos= position[0];
    for(int i=0;i<position.size();i++){
        if(position[i]-lastPos >= mid){
            magCount++;
            if(magCount==k){
                return true;
            }
            lastPos = position[i];
        }
    }
    return false;
}
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
  int s = 0;
  int maxi = -1;
  for (int i = 0; i < position.size(); i++) {
    maxi = max(maxi, position[i]);
  }
  int e = maxi;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while(s<=e){
      if(isPossible(position, m , mid)){
          ans= mid;
          s=mid+1;
      }
      else{
          e=mid-1;
      }
      mid = s + (e - s) / 2;
  }
  return ans;
        
    }
};