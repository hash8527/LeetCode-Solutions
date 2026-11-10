class Solution {
public:
    int passThePillow(int n, int time) {
        int current = 1;
        int direction = 1; // +1 for forward, -1 for backward
        while (time > 0) {
            current += direction;
            time--;
            // When we reach either end, flip direction!
            if (current == n) {
                direction = -1;
            } else if (current == 1) {
                direction = 1;
            }
        }
        return current;
    }
};