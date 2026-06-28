/*Problem : 205 isomorphic string*/
#include <stdio.h>
#include <string.h>

int isIsomorphic(char s[], char t[]) {

    if (strlen(s) != strlen(t))
        return 0;

    char mapST[256] = {0};
    char mapTS[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {

        if (mapST[(unsigned char)s[i]] == 0 &&
            mapTS[(unsigned char)t[i]] == 0) {

            mapST[(unsigned char)s[i]] = t[i];
            mapTS[(unsigned char)t[i]] = s[i];
        }

        else {

            if (mapST[(unsigned char)s[i]] != t[i] ||
                mapTS[(unsigned char)t[i]] != s[i])

                return 0;
        }
    }

    return 1;
}

int main() {

    char s[100], t[100];

    scanf("%s", s);
    scanf("%s", t);

    if (isIsomorphic(s, t))
        printf("true");
    else
        printf("false");

    return 0;
}
