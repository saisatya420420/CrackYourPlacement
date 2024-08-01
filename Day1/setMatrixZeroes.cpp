/* Create seperate arr for rows, columns , like boolean */

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int>r,c;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }

        for(int i=0;i<r.size();i++){
            for(int j=0;j<m[0].size();j++)
                m[r[i]][j]=0;
        }

        for(int i=0;i<c.size();i++){
            for(int j=0;j<m.size();j++)
                m[j][c[i]]=0;
        }

    }
};
