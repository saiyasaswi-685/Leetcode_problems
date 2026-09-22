class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        unordered_map<char,int> mp;

        for(char ch : words[0])
        {
            mp[ch]++;
        }

        for(int i =1; i < words.size(); i++)
        {unordered_map<char,int> temp;
            for (char ch : words[i])
            {
                 temp[ch]++;
            }

            for(auto &x : mp)
            {
                x.second = min(x.second, temp[x.first]);
            }
        }
        vector<string> ans;
        for(auto x : mp)
        {
            while(x.second >0)
            {
                ans.push_back(string(1,x.first));
                x.second --;
            }
        }

        return ans;

        
    }
};