/**
 * An image is represented by a 2-D array of integers, each integer representing the pixel value of the image (from 0 to 65535).

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

At the end, return the modified image.

 **/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(); if (m == 0) return image;
        int n = image[0].size(); if (n == 0) return image;
        int c = image[sr][sc];
        if (c != newColor)
            dfs(image, m, n, sr, sc, c, newColor);
        return image;
    }
    
private:
    void dfs(vector<vector<int>>& image, int m, int n, int x, int y, int oc, int nc) {
        if (x < 0 || x >= m || y < 0 || y >= n || image[x][y] != oc) return;
        image[x][y] = nc;
        dfs(image, m, n, x-1, y, oc, nc);
        dfs(image, m, n, x+1, y, oc, nc);
        dfs(image, m, n, x, y-1, oc, nc);
        dfs(image, m, n, x, y+1, oc, nc);
    }
};