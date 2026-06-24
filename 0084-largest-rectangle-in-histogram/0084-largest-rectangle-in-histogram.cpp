class Solution {
private:
vector<int>prevSmaller(vector<int>arr,int n){

    vector<int>ans(n);
    stack<int>s;

    for(int i=0;i<n;i++){


        while(!s.empty()&& arr[s.top()]>=arr[i])
        s.pop();


        if(s.empty())
        ans[i]=-1;

        else
        ans[i]=s.top();


        s.push(i);

    }
return ans;
}
vector<int>nextSmaller(vector<int>arr,int n){

    vector<int>ans(n);
    stack<int>s;

    for(int i=n-1;i>=0;i--){


        while(!s.empty()&& arr[s.top()]>=arr[i])
        s.pop();


        if(s.empty())
        ans[i]=n;
        else
        ans[i]=s.top();



        s.push(i);

    }
return ans;
}
public:
    int largestRectangleArea(vector<int>& heights) {

        vector<int>small(heights.size());
        small=nextSmaller(heights,heights.size());


        vector<int>prev(heights.size());
        prev=prevSmaller(heights,heights.size());


        int maxArea=0;
        
        for(int i=0 ; i<heights.size();i++){
        
        maxArea=max(maxArea,heights[i]*(small[i]-prev[i]-1));

        }

        return maxArea;
        
    }
};