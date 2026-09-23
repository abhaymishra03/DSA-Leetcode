class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {


        int large = arr[arr.size()-1];
        arr[arr.size()-1]=-1;



        for(int i = arr.size()-2; i>= 0 ; i--) {

            int el = large;


            large=max(large,arr[i]);

            arr[i]=el;

        }
        return arr;
        
    }
};