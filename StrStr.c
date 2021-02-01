#Input: haystack = "hello", needle = "ll"
#Output: 2
#Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//use two pointers, i ,j .i 寻找 needle position, not find i = i + 1, if find choose start index i



int strStr(char * haystack, char * needle){
    if (needle == NULL && haystack == NULL)
        return 0;
    int m = strlen(haystack);
    int n = strlen(needle);
    
    if (m < n)
        return -1;
    for (int i = 0; i < m - n; ++i) //only need to check until the start of needle, or cannot find
    {
        int j;
        for (j = 0; j < n; ++j)
        {
            if(haystack[i+j] != needle[j]) //charactor in haystack not match the corres charactor in needle
                break;
        }
        if (j == n) //find 
            return i;
    }
    return -1;
}
