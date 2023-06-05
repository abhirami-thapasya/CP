class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<map<char,int>> hash;
        for(int i=0;i<9;i++){
            map<char,int> temp;
            for(int j=0;j<9;j++){
                if(board[i][j]-'.'==0){
                    continue;
                }
                temp[board[i][j]]++;
                if(temp[board[i][j]]>1){
                    return false;
                }
            }
            hash.push_back(temp);
        }
        for(int i=0;i<9;i++){
            map<char,int> temp;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                temp[board[j][i]]++;
                if(temp[board[j][i]]>1){
                    return false;
                }
            }
            hash.push_back(temp);
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                map<char,int> temp;
                for(int l=i;l<i+3;l++){
                    for(int k=j;k<j+3;k++){
                        if(board[l][k]=='.'){
                            continue;
                        }
                        temp[board[l][k]]++;
                        if(temp[board[l][k]]>1){
                            return false;
                        }
                    }
                }
                hash.push_back(temp);
            }
        }
        return true;
    }
};