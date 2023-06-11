
class UndergroundSystem {
public:
    //1396. Design Underground System

    //Implements class for tracking customer travel times between any two given stations
    //uses two maps to store checkin info and travel time info
    map<int, pair<int, string>> checkins;
    map<string, pair<int, int>> travelTimes;
    UndergroundSystem() {
    }
    
    //Enter checkin time and location info into first map, assumes there is no entry @ index id
    void checkIn(int id, string stationName, int t) {
        checkins[id] = make_pair(t, stationName);
    }
    
    //Function for checking out at station
    //Gets checkin info, erases from checkin map, and stores travel time & frequency in second map
    void checkOut(int id, string stationName, int t) {
        //Getting id's checkin time & location from map & erasing entry
       pair<int, string> checkinInfo = checkins[id];
       checkins.erase(id);

       //Creating string formatted as firstStation|secondStation
        string travelPoints = checkinInfo.second + '|' + stationName;

       //Calculating travel time b/w stations
        int travelTime = t - checkinInfo.first;

        //If there is an entry for travel b/w the two stations, update total travel time & frequency
        //Else create entry w/ current travel time and frequency of 1
        if (travelTimes.find(travelPoints) != travelTimes.end()) {
            travelTimes[travelPoints].first += travelTime;
            travelTimes[travelPoints].second++;
        }
        else {
            travelTimes[travelPoints] = make_pair(travelTime, 1);
        }
    }
    

    //Function for getting average travel time b/w two stations
    double getAverageTime(string startStation, string endStation) {
        //Getting pair of total travel time & frequency from map & returning average
        string travel = startStation + "|" + endStation;
        pair<int, int> travelTime = travelTimes[travel];
        return (double) travelTime.first / travelTime.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */