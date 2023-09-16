class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int x_dis = abs(fx-sx);
        int y_dis = abs(fy-sy);
        if(x_dis==0 && y_dis==0) return t!=1;
        if(x_dis<=t && y_dis<=t) return true;
        return false;
    }
};