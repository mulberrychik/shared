class Solution {
public:
    
    vector<int> hourcount(vector<int>& piles, int k){
        int hour = 0;
        int max = -1;
        for(int i = 0; i< piles.size();i++){
            if(piles[i] > max) max = piles[i];
            hour = hour + ceil(piles[i]/k);
        }
        return {hour ,max};
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        //ans lies between k ans piles.max
        int max;
        int hours = 0;
        hours = hourcount(piles , 1)[0];
        max = hourcount(piles , 1)[1];
        if (max == 1) return 1;

        int low = 1;
        int high = max;
        while(low <= high){
            int mid = low + (high - low)/2;

            if(hourcount(piles , mid)[0] <= h){
                high = mid - 1;
            }
            else if (hourcount(piles, mid)[0] > h){
                low = mid + 1;
            }
        }
        return low;

    }
};