class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string s=word1.substr(i++,1);
        while(j<word2.size() || i<word1.size()){
            while(j<word2.size() && i<word1.size()){
                s+=word2[j++];
                s+=word1[i++];
            }
            while(j<word2.size()){
                s+=word2[j++];
            }
            while(i<word1.size()){
                s+=word1[i++];
            }
        }
        return s;
    }
};