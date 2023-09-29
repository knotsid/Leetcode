class Solution {
public:
    int findMax(vector<int> &v){
        int maxx=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxx=max(maxx,v[i]);
        }
        return maxx;
    }

    long long calculateTotalHour(vector<int> &v, int hourly){
        long long totalH=0;
        for(int i=0;i<v.size();i++){
            totalH += ceil((double)v[i]/(double)hourly);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& v, int h) {
        int st=1, end =findMax(v);
        while(st<=end){
            int mid = st + (end-st)/2;
            long long totalH = calculateTotalHour(v,mid);
            if(totalH<=h){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return st;
    }
};