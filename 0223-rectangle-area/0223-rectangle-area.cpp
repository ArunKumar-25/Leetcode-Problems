class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int rx1=max(ax1,bx1);
        int ry1=max(ay1,by1);
        int rx2=min(ax2,bx2);
        int ry2=min(ay2,by2);
        
        return (ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1)-(((rx2-rx1)>0 && (ry2-ry1)>0 )?(rx2-rx1)*(ry2-ry1):0);
    }
};