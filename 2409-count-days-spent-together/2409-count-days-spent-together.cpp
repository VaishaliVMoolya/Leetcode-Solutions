class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<string> v = {arriveAlice,leaveAlice,arriveBob,leaveBob};
        vector<int> n = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> num;
        vector<int> res(12);
        int sum=0;
        for(int i=0;i<n.size();i++){
            res[i] = sum;
            sum += n[i];
        }
        for(auto it:v){
            int month = stoi(it.substr(0, 2));
            int day = stoi(it.substr(3, 2));
            int daynum = res[month-1] + day;
            num.emplace_back(daynum);
        }
        int overlapStart = max(num[0],num[2]);
        int overlapEnd = min(num[1],num[3]);
        if(overlapEnd >=overlapStart)
            return (overlapEnd-overlapStart)+1;
        return 0;
        
    }
};