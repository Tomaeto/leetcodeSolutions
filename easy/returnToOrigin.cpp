class Solution {
public:
    //657. Return to Origin

    //Given a sequence of moves (Up, Left, Down, and Right) return if the moves return to the origin at the end

    //Tracks vertical and horizontal distance from origin, returns true if final distances are 0
    bool judgeCircle(string moves) {
        int vert = 0;
        int hori = 0;
        for (auto ch : moves) {
            switch(ch) {
                case 'U':
                    hori++;
                    break;
                case 'D':
                    hori--;
                    break;
                case 'R':
                    vert++;
                    break;
                case 'L':
                    vert--;
                    break;
                default:
                    break;
            }
        }
        return vert == 0 && hori == 0;
    }
};
