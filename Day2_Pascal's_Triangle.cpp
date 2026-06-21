//PASCAL'S TRIANGLE
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final;
        for(int r=1;r<=numRows;r++){
            vector<int> ans;
            for(int c=1;c<=r;c++){
                int res=1;
                for(int i=0;i<c-1;i++){
                    res= res*((r-1)-i);
                    res = res/(i+1);
                }
                ans.push_back(res);
            }
            final.push_back(ans);
        }
        return final;
    }
};