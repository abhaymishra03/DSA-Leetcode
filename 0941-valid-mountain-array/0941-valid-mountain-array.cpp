class Solution {
public:


    bool isInc(vector<int> &arr ,int left , int right) {


        for(int i = left ; i < right ; i++) {

            if(arr[i]>=arr[i+1])
            return false;
        }

        return true;

    }
     bool isDec(vector<int> &arr ,int left , int right) {


        for( int i = left ; i < right ; i++) {

            if(arr[i] <= arr[i+1])
            return false;
        }


return true;


     }
    bool validMountainArray(vector<int>& arr) {

        if(arr.size()<3) return false;

        int maxEl=INT_MIN;
        int maxIdx ;


        for(int i = 0 ; i < arr.size() ; i++)  {

        if(arr[i]>maxEl) {
            maxEl = arr[i];
            maxIdx =i;

        }


        }

        if(maxIdx == 0 || maxIdx ==arr.size()-1 ) return false;
        return isInc(arr,0,maxIdx) && isDec(arr,maxIdx,arr.size()-1);


        
    }
};