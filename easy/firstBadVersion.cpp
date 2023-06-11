// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    //278. First Bad Version

    //Finds first bad version out of n versions of a product, using isBadVersion
    //uses a binary search
    int firstBadVersion(int n) {
        //Initialize lowest version to 1 and highest version to n
        int low = 1;
        int high = n;
        //While highest version is bad and loewst version is not bad, increment low and high as if a binary search
        while (isBadVersion(high) && !isBadVersion(low)) {
            low += low/2;
            high -= high/2;
        }
        //After high bound is found, increment low until bad version is found
        while (!isBadVersion(low)) {
            low++;
        }
        //Return id of first bad version
        return low;
    }
};