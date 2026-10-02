#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int i = 0;

    while (strs[0][i] != '\0') {

        for (int j = 1; j < strsSize; j++) {

            if (strs[j][i] == '\0' ||
                strs[j][i] != strs[0][i]) {

                char* result = (char*)malloc((i + 1) * sizeof(char));

                for (int k = 0; k < i; k++) {
                    result[k] = strs[0][k];
                }

                result[i] = '\0';

                return result;
            }
        }

        i++;
    }

    char* result = (char*)malloc((i + 1) * sizeof(char));

    for (int k = 0; k < i; k++) {
        result[k] = strs[0][k];
    }

    result[i] = '\0';

    return result;
}