class Solution {
public:
       bool isAlphanumeric(char ch){
    if ((ch>='0' && ch<='9')||
   (tolower(ch)<='z'&& tolower(ch)>='a')){
        return true ;
    }
    return false;
}
    bool isPalindrome(string str) {
 bool isPal=true;

int st=0,end=str.length()-1;
while(st<end){
    if(!isAlphanumeric(str[st])){
        st++;
        continue;
    }
    if(!isAlphanumeric(str[end])){
        end--;
        continue;

    }
    if(tolower(str[st])!=tolower(str[end])){
       isPal=false;
       break;
        
        
        
        

    }
    st++;
    end--;
}
return isPal;

        
    }
};