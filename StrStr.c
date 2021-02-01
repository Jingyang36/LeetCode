#Input: haystack = "hello", needle = "ll"
#Output: 2
#Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.




int strStr(char * haystack, char * needle){
    if (needle == NULL && haystack == NULL)
        return 0;
    int m = strlen(haystack);
    int n = strlen(needle);
    
    if (m < n)
        return -1;
    for (int i = 0; i < m - n; ++i)
    {
        int j;
        for (j = 0; j < n; ++j)
        {
            if(haystack[i+j] != needle[j])
                break;
        }
        if (j == n)
            return i;
    }
    return -1;
}
