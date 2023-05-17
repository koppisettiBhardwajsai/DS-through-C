
char* isBalanced(char* s) {
    char stack[1001];
    int top=-1;
    for (int i=0;i<strlen(s);i++)
    {
       if(s[i]=='{' || s[i]=='(' || s[i]=='[')
       {
           stack[++top]=s[i];
       } 
       else 
       {
           if((s[i]=='}' && stack[top]=='{') || (s[i]==']' && stack[top]=='[') || (s[i]==')' && stack[top]=='('))
           {
               top--;
           }
           else
           {
               return "NO";   
           }
       }
    }
    if(top==-1){
        return "YES";
    } 
    else{
        return "NO";
    }
}
