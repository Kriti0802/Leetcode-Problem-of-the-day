
#include <bits.\stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i=0;
        int j=grid[0].size()-1;
        int cnt=0;
        while(i<n && j>=0)
        {
            if(grid[i][j]<0)
            {
               cnt+=n-i;
                j--;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};