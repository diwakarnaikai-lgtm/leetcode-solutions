#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    int count[26] = {0};

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        return 0;
    }

    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[100];
    char t[100];

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    if (isAnagram(s, t)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}