//PASCAL'S TRIANGLE
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final;
        for(int r=1;r<=numRows;r++){
            int res=1;
            vector<int> ans;
            ans.push_back(1);
            for(int c=1;c<r;c++){
                res=res*(r-c)/c;
                ans.push_back(res);
            }
            final.push_back(ans);
        }
        return final;
        
    }
};