class Solution {
private:
    void soln(string digits,int i,string str,vector<string>& combn,map<int,string> keys){
        if(i>=digits.size()){
            combn.push_back(str);
            return;
        }
        int num=digits[i]-'0';
        string ctr=keys[num];
        for(int j=0;j<ctr.size();j++){
            str.push_back(ctr[j]);
            soln(digits,i+1,str,combn,keys);
            str.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> combn;
        if(digits.size()==0){
            return combn;
        }
        string str="";
        int index=0;
        map<int,string> keys={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        soln(digits,index,str,combn,keys);
        return combn;
    }
};