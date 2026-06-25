/*problem: #28 Find the Index of the First Occurrence in a String */
int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    // Empty needle is found at index 0
    if (m == 0) {
        return 0;
    }

    // Try every possible starting index in haystack
    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // Compare needle with haystack starting from index i
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        // If all characters matched
        if (j == m) {
            return i;
        }
    }

    return -1;
}