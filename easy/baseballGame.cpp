class Solution {
public:
    //682. Baseball Game

    //Given an array of operations, apply them to the record and return sum of final record

    //Keeps a running sum of the scores at each operation
    int calPoints(vector<string>& operations) {
        int runningSum = 0;
        vector<int> record;
        for (string op : operations) {
            //For operation "D" record a new score that is double the last score
            if (op.compare("D") == 0) {
                record.push_back(record[record.size() - 1] * 2);
                runningSum += record.back();
            }
            //For operation "C" remove last score from record
            else if (op.compare("C") == 0) {
                runningSum -= record.back();
                record.pop_back();
            }
            //For operation "+" record a new score that is the sum of the last two scores
            else if (op.compare("+") == 0) {
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
                runningSum += record.back();
            }
            //For all other operations, op is a score, so record that score
            else {
                record.push_back(stoi(op));
                runningSum += record.back();
            }
        }
        return runningSum;
    }
};
