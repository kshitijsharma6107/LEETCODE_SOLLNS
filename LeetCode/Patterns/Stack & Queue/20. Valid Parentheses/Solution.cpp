class Solution {

public:
    bool isValid(string str) 
    {
    if(str.length()%2==1)
            return false;
        stack<char> stk;
        
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            if(ch=='(' || ch=='[' || ch== '{')
                stk.push(ch);
            else 
            {
                if(stk.empty()) 
                 return false;
                char pobr=stk.top(); stk.pop();
               if(ch==')' && pobr=='(' ||ch=='}' && pobr=='{' || ch==']' && pobr=='[' )
                   continue;
                 else
                    return false;      
            }    
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};