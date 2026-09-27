class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i=0;
        int ans=0;

        while(i<chars.size()){

            char ch =chars[i];
            int count =0;

            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            chars[ans]=ch;
            ans++;

            if(count>1){
                string s=to_string(count);
                for(int j=0;j<s.length();j++){
                    chars[ans]=s[j];
                    ans++;
                }
            }
        }
        return ans;
        
    }
};