/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
Input: s = "()"
Output: true
Input: s = "(]"
Output: false

stack pop
*/
bool isValid(char * s){
    char *stack = malloc(strlen(s));
    assert(stack);
    int top = 0;
    int i;
    char c, e;
    
    for (i = 0; i < strlen(s); i++) {
        c = s[i];
        if (c == ')') {
            if (top == 0)
                return false;
            e = stack[--top];
            if (e != '(')
                return false;
        } else if (c == '}') {
            if (top == 0)
                return false;
            e = stack[--top];
            if (e != '{')
                return false;
        } else if (c == ']') {
            if (top == 0)
                return false;
            e = stack[--top];
            if (e != '[')
                return false;
        } else {
            stack[top++] = c;
        }
    }
    
    return top == 0;
}
