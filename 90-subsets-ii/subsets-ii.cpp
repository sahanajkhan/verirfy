class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& s) {
        

       vector<vector<int>>totalset = {{}};

        sort(s.begin(),s.end());

        for(int i =0; i<s.size();){
            int count = 0;

            while(count + i <s.size() && s[count+i] == s[i]) count++;
            int presize = totalset.size();

            for(int k =0; k<presize; k++){
                vector<int> instance = totalset[k];
                for(int j =0; j<count; j++){
                    instance.push_back(s[i]);
                    totalset.push_back(instance);
                }
            }
            i += count;
        }

        return totalset;
    }
};