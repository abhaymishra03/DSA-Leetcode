class Solution {
private:
vector<int> prevGreater(vector<int>& arr, int n) {
    vector<int> ans(n);
    int max=arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i]>=max){
            ans[i]=-1;
            max=arr[i];
            
        }
        else
        ans[i]=max;
    }
    return ans;
}
vector<int> nextGreater(vector<int>& arr, int n) {
    
  vector<int> ans(n);
    int max=arr[n-1];

    for(int i = n-1; i >= 0; i--) {
        if(arr[i]>=max){
            ans[i]=-1;
            max=arr[i];
            
        }
        else
        ans[i]=max;
    }
    return ans;

   
}





 public : int trap(vector<int>& height) {
        int totalWater = 0;
        int n = height.size();

        vector<int> prev(n);
        prev = prevGreater(height, n);

        vector<int> next(n);
        next = nextGreater(height, n);

        for (int i = 0; i < n; i++) {

            if (prev[i] == -1 || next[i] == -1)
                continue;

            totalWater += (min(prev[i], next[i]) - height[i]);
        }

        return totalWater;
    }
};