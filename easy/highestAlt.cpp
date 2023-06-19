class Solution {
public:
    //1732. Find the Highest Altitude

    //Given an array gain where gain[i] is the net gain between points i and i + 1, return highest altitude of a point
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int alt = 0;
        for (auto i : gain) {
            alt += i;
            highest = max(highest, alt);
        }
        return highest;
    }
};
