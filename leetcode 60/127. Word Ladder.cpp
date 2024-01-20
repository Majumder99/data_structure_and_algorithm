class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (dict.find(endWord) == dict.end())
            return 0;

        queue<string> q;
        q.push(beginWord);
        int level = 0;

        while (!q.empty())
        {
            int size = q.size();
            level++;
            while (size--)
            {
                string curr = q.front();
                q.pop();
                for (int i = 0; i < curr.size(); i++)
                {
                    char temp = curr[i];
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        curr[i] = c;
                        if (curr == endWord)
                            return level + 1;
                        if (dict.find(curr) == dict.end())
                            continue;
                        dict.erase(curr);
                        q.push(curr);
                    }
                    curr[i] = temp;
                }
            }
        }
        return 0;
    }
};