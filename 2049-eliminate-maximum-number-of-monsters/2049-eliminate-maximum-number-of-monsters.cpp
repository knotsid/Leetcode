class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> arrivalTime(n);

        // claculating arrival time of each monster
        for(int i = 0; i < n; i++){
            // time = dist/espeed
            // -1 bcoz we lose if monster reaches city nd 
            // at same time weapon is recharged
            arrivalTime[i]=(dist[i]-1)/speed[i];
        }

        sort(arrivalTime.begin(), arrivalTime.end());

        for(int i = 0; i < n; i++){
            // if monster comes later than min when it should be elim, return i
            // meaning all monster can't be elim'd before reacing city
            if(i>arrivalTime[i]){
                return i;
            }
        }
        return n;
    }
};