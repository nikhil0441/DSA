 unordered_map<string, int> mp;
    int n = s.length();
    int len = 0;

    // Generating all possible substrings and counting their occurrences
    for (int i = 0; i < n; ++i)
    {
        string sub = "";
        for (int j = i; j < n; ++j)
        {
            sub += s[j];
            mp[sub]++;
        }
    }

    // Finding the longest substring that appears at least 3 times
    for (auto p : mp)
    {
        if (p.second >= 3)
        {
            len = max(static_cast<int>(p.first.length()), len);
        }
    }
    return len;