class Solution {
public:
    bool isValid(string s) 
    {   /*
        LOGIC: 
        Adding the opening brackets to the stack, and when a closing bracket comes up, 
        we check if the top element in the stack is the corresponding opening
        bracket to the closing bracket, if it is, that element is popped from the
        stack and loop further iterates. if the element is not the corresponding
        opening bracket then it is left in the stack, which implies that the string
        is not valid
        */
       
       stack<char> checking_if_valid;
       for(int i = 0; i<s.length(); i++)
       {
           if(s[i]=='(' || s[i]=='[' || s[i]=='{')
           {
               checking_if_valid.push(s[i]);
           }

           else
            {
                 if(!checking_if_valid.empty())
            {
                if( (checking_if_valid.top()=='(' && s[i]==')' )|| 
                    (checking_if_valid.top()=='[' && s[i]==']' )|| 
                    (checking_if_valid.top()=='{' && s[i]=='}' ) )
                {
                    checking_if_valid.pop();
                }

                else
                {
                    return false;
                }
              
            }
            else //if the stack is empty then this means that there's no open bracket present in the starting therefore string is invalid
            {
                return false;
            } 
            }
       } 
 
       return checking_if_valid.empty();


    }
};