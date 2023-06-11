class SnapshotArray {
public:
    //1146. Snapshot Array
    
    //Vector of maps for storing array values and changes
    //vector ID is index, first map is snap ID, second map is value
    vector<map<int, int>> snapshots;
    //snapID tracks most recent snapshot/current array
    int snapID = 0;
    SnapshotArray(int length) {
        //Sizing vector to given length
        snapshots.resize(length);

        //Filling all entries with a starting value of 0 and snap ID of 0
        for (int i = 0; i < length; i++) {
            snapshots[i][0] = 0;
        }
    }
    
    void set(int index, int val) {
        //Setting value in index at current snapID
        snapshots[index][snapID] = val;
    }
    
    int snap() {
        //Iterating snapID so later calls of set() change a different map
        snapID++;
        return snapID - 1;
    }
    
    int get(int index, int snap_id) {
        //If the given snap id is not in the given vector, return next highest snap ID's value
        if (snapshots[index].find(snap_id) == snapshots[index].end()) {
            auto it = --snapshots[index].lower_bound(snap_id);
            return it->second;
        }
        //Else, return value at given index and snapshot
        return snapshots[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */