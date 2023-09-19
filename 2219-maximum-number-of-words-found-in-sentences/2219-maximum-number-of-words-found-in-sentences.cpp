class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count;
        int ans=INT_MIN;
        for(int i=0; i<sentences.size(); i++){
            count=1;
            for(int j=0; j<sentences[i].length(); j++){
                if(sentences[i][j]==' ') count++;
            }
            ans=max(count,ans);
        }
        return ans;
    }
};