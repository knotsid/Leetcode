class Solution {
public:
    int findDays(vector<int>v, int cap){
        int days=1, load=0;
        for(int i=0;i<v.size();i++){
            if(v[i]+load>cap){
                days+=1;
                load=v[i];
            }
            else{
                load+=v[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int st = *max_element(weights.begin(),weights.end());
        int end = accumulate(weights.begin(),weights.end(),0);

        while(st<=end){
            int mid = st + (end-st)/2;
            int numOfDays=findDays(weights, mid);
            if(numOfDays<=days){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return st;
    }
};