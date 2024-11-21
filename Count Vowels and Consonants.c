#include <stdio.h>
#include <ctype.h>  // For the tolower() function

// Function to count vowels and consonants
void countVowelsAndConsonants(char str[], int *vowelCount, int *consonantCount) {
    // Loop through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase for easier comparison
        char ch = tolower(str[i]);

        // Check if the character is a vowel (a, e, i, o, u)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowelCount)++;
        }
        // Check if the character is a consonant (alphabetical and not a vowel)
        else if ((ch >= 'a' && ch <= 'z')) {
            (*consonantCount)++;
        }
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if it's there (added by fgets)
    str[strcspn(str, "\n")] = '\0';

    // Call the function to count vowels and consonants
    countVowelsAndConsonants(str, &vowels, &consonants);

    // Output the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

