class Solution {

    bool valid(char ch){
        if((ch>='A' && ch<='Z') || (ch>='0' && ch<='9') || (ch>='a' && ch<='z')){
            return true;
        }
        return false;
    }

    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp = ch-'A'+'a';
            return temp;
        }
    }

public:
    bool isPalindrome(string s) {
        string temp = "";

        for(int i = 0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

         for(int i = 0;i<temp.length();i++){
            temp[i] = toLowerCase(temp[i]);
        } 

        int start = 0;
        int end = temp.size()-1;

        while(start<=end){
            if(temp[start]!=temp[end]){
                return false;
            }
                start++;
                end--;
            }
        return true;
    }
};
