class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mpp1, mpp2;
        for(auto& it:s){
            mpp1[it]++;
        }
        for(auto& it:t){
            mpp2[it]++;
        }
        if(mpp1.size()!=mpp2.size()){
            return false;
        }
        for(int i=0;i<mpp1.size();i++){
            if(mpp1[i]!=mpp2[i]){
                return false;
            }
        }
        return true;
    }
};
