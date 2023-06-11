using namespace std;

class MyHashSet {
public:
    //705. Design HashSet

    //Uses a vector of lists and a size value
    //each bucket corresponds to a value and stores the keys pointing to that value

    int size;
    vector<list<int>> buckets;
    MyHashSet() {
        size = 1000;
        buckets = vector<list<int>>(size);
    }
    
    //Function for adding key to hash set
    void add(int key) {
        //Getting index for the key using hash function
        int index = hash(key);

        //Getting bucket corresponding to index and inserting if not in bucket already
        list<int>& bucket = buckets[index];
        if (!contains(key, bucket))
            bucket.push_back(key);
    }
    
    //Function for removing key from hash set
    void remove(int key) {
        //Getting index for the key using hash function
        int index = hash(key);

        //Getting bucket corresponding to index and removing key
        list<int>& bucket = buckets[index];
        bucket.remove(key);
    }
    
    //Function for checking if hash set contains a key
    bool contains(int key) {
        //Getting index and bucket
        int index  = hash(key);
        list<int>& bucket = buckets[index];

        //Returning result of private contains function
        return contains(key, bucket);
    }

    private:

        //Function for hashing a given key using hash set size
        int hash(int key) {
            return key % size;
        }

        //Private function for checking if hash set contains a key
        //Checks each int in a given bucket and returns if the key is found
        bool contains(int key, list<int>& bucket) {
            for (int num : bucket) {
                if (num == key) return true;
            }
            return false;
        }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */