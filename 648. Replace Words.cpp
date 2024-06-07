class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> dict(dictionary.begin(),dictionary.end());
        string s="";
        int j=0;
        sentence.push_back(' ');
        string temp="";
        while(j<sentence.length()){
            if(sentence[j]==' '){
                s+=temp;
                s+=' ';
                temp="";
            }
            else{
                temp+=sentence[j];
                if(dict.count(temp)){
                    s+=temp;
                    s+=' ';
                    temp="";
                    while(j<sentence.length() && sentence[j]!=' '){
                        j++;
                    }
                }
            }
            j++;
        }
        s.pop_back();
        return s;
    }
};