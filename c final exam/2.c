#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countConsonants(const char *sentence, int *consonantCounts) {
    int i;
    for (i = 0; i < strlen(sentence); i++) {
        char c = tolower(sentence[i]);
        if (c >= 'a' && c <= 'z' && strchr("aeiou", c) == NULL) {
            consonantCounts[c - 'a']++;
        }
    }
}

int main() {
    char sentence[100];
    int consonantCounts[26] = {0}; // Initialize all counts to 0

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countConsonants(sentence, consonantCounts);

    printf("Consonant Counts:\n");
    for (int i = 0; i < 26; i++) {
        if (consonantCounts[i] > 0) {
            printf("%c: %d\n", 'a' + i, consonantCounts[i]);
        }
    }

    return 0;
}