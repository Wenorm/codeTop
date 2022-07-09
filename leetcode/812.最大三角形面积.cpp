/*
 * @lc app=leetcode.cn id=812 lang=cpp
 *
 * [812] 最大三角形面积
 */

// @lc code=start
class Solution {
public:
    double getArea(vector<int> point1, vector<int> point2,vector<int> point3){
        return 0.5*abs((point1[0]*point2[1]+point2[0]*point3[1]+point3[0]*point1[1])-(point1[1]*point2[0]+point2[1]*point3[0]+point3[1]*point1[0]));
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = 0;
        for(int i=0;i<points.size()-2;i++){
            for(int j=i+1;j<points.size()-1;j++){
                for(int k=j+1;k<points.size();k++){
                    ans = max(ans, getArea(points[i], points[j],points[k]));
                }
            }
        }
        return ans;
    }
};
// @lc code=end

