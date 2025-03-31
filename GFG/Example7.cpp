class Solution
{
public:
    int maxPartitions(string &s)
    {
        // code here
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = i;
        }
        int end = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            end = max(end, mp[s[i]]);
            if (end == i)
                ans++;
        }
        return ans;
    }
};
