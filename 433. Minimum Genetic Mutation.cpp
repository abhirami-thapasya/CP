class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        set<string> s(bank.begin(),bank.end());
        queue<pair<string,int>> q;
        q.push({startGene,0});
        vector<char> gene={'A','C','G','T'};
        while(!q.empty()){
            string node=q.front().first;
            int num=q.front().second;
            q.pop();
            for(int i=0;i<node.size();i++){
                char og=node[i];
                for(int j=0;j<4;j++){
                    if(og==gene[j]){
                        continue;
                    }
                    node[i]=gene[j];
                    if(s.count(node)){
                        q.push({node,num+1});
                        s.erase(node);
                        if(node==endGene){
                            return num+1;
                        }
                    }
                }
                node[i]=og;
            }
        }
        return -1;
    }
};