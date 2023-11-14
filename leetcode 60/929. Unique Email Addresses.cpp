class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        unordered_set<string> s;
        for (auto &email : emails)
        {
            string temp;
            for (int i = 0; i < email.size(); i++)
            {
                if (email[i] == '.')
                    continue;
                else if (email[i] == '+')
                {
                    while (email[i] != '@')
                        i++;
                    temp += email.substr(i);
                    break;
                }
                else if (email[i] == '@')
                {
                    temp += email.substr(i);
                    break;
                }
                else
                    temp += email[i];
            }
            s.insert(temp);
        }
        return s.size();
    }
};