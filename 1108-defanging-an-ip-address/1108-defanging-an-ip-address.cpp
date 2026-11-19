class Solution {
public:
    string defangIPaddr(string address) 
    {
        string output;

        for (int i = 0; address[i] != '\0'; i++)
        {
            if (address[i] == '.')
            {
                output += "[.]";
            }
            else
            {
                output.push_back(address[i]);
            }
        }

        return output;
    }
};