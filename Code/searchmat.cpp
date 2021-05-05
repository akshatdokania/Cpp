#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int pos;
        int j = matrix[0].size();
        int flag=0;
        for(int i=0; i<matrix.size(); i++){
            if(target>=matrix[i][0] && target<=matrix[i][j-1]){
                pos=i;
            }
        }
        for(int i=0; i<j; i++){
            if(target==matrix[pos][i])
                return true;
        }
        return false;
    }
};

int main(){
    Solution ob;
    
    int ele;
    vector<vector<int>> vec1 = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    bool res = ob.searchMatrix(vec1, 13);
    cout<<res;
    return 0;
}