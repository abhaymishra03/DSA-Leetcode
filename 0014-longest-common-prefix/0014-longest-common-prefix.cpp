class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
       sort(str.begin(),str.end());


       string st ="";

       int i = 0;

       string str1 = str[0];
       string str2 = str[str.size() - 1];;

       while( i < str1.size() && i < str2.size()) {

        

        if(str1[i] == str2[i]){
        st+=str1[i];
        
        i++;}
        else {
            break;
        }


       }

       return st;
        
    }
};