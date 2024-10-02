#include <stdio.h>
#include <string.h>
void count_chars(const char *word) {
    int counts[256] = {0}; // Assuming ASCII characters
    
    // Count occurrences of characters
    size_t length = strlen(word);
    for (size_t i = 0; i < length; i++) {
        counts[(unsigned char)word[i]]++;
    }
    
    // Print counts in alphabetical order
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c:%d\n", i, counts[i]);
        }
    }
}
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s text1 [text2 text3 ...]\n", argv[0]);
        return 1;
    }
    
    for (int i = 1; i < argc; i++) {
        count_chars(argv[i]);
    }
    
    return 0;
}

