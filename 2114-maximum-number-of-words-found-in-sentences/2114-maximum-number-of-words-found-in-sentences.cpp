class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int words = 1;
        int max;

        for (int i = 0; i < sentences.size(); i++) {
            for (int j = 0; sentences[i][j] != '\0'; j++) {
                if (sentences[i][j] == ' ') {
                    words += 1;
                }
            }

            if (i == 0) {
                max = words;
            } else if (words >= max)
            {
                max = words;
            }
            words = 1;
        }
        return max;
    }
};