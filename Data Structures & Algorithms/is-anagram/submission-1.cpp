class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size(), n = t.size();
        
        map<char, int> sMap{};
        map<char, int> tMap{};

        if (m != n)
            return false;
        
        for (int i = 0; i < m; i++) {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        m = sMap.size();
        for (int i = 0; i < m; i++) {
            if (sMap[s[i]] != tMap[s[i]])
                return false;
        }

        return true;
    }
};
