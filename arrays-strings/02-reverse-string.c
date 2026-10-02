#include <stdio.h>

void reverseString(char s[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[100];
    int n = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    while (s[n] != '\0') {
        n++;
    }

    reverseString(s, n);

    printf("Reversed string: %s\n", s);

    return 0;
}