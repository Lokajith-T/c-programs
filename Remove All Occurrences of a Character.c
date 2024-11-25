#include <stdio.h>

// Function to remove all occurrences of a specified character from a string
void removeCharacter(char str[], char target) {
    int i = 0, j = 0;
    
    // Loop through the original string
    while (str[i] != '\0') {
        // If the current character is not the target, copy it to the same position
        if (str[i] != target) {
            str[j++] = str[i];
        }
        i++;
    }
    
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char str[100], target;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets (if any)
    str[strcspn(str, "\n")] = '\0';

    // Input the character to remove
    printf("Enter the character to remove: ");
    scanf("%c", &target);

    // Remove all occurrences of the specified character
    removeCharacter(str, target);

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
#include <stdio.h>

// Function to remove all occurrences of a specified character from a string
void removeCharacter(char str[], char target) {
    int i = 0, j = 0;
    
    // Loop through the original string
    while (str[i] != '\0') {
        // If the current character is not the target, copy it to the same position
        if (str[i] != target) {
            str[j++] = str[i];
        }
        i++;
    }
    
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char str[100], target;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets (if any)
    str[strcspn(str, "\n")] = '\0';

    // Input the character to remove
    printf("Enter the character to remove: ");
    scanf("%c", &target);

    // Remove all occurrences of the specified character
    removeCharacter(str, target);

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
