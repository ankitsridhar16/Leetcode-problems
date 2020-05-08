/**Check If It Is a Straight Line
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.
**/





class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dy = coordinates[1][1] - coordinates[0][1];
	    int dx = coordinates[1][0] - coordinates[0][0];
        for( int i=2; i < coordinates.size(); i++ ) {
		    auto flag = coordinates[i];
		    if( dx*(flag[1] - coordinates[0][1]) != dy*(flag[0] - coordinates[0][0]) )
			    return false;
	    }
	    return true;
    }
};