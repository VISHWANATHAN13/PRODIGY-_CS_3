#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, uppercase, lowercase, numbers, special_chars;
    int i;
    length = uppercase = lowercase = numbers = special_chars = 0;
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    length = strlen(password) - 1; // Exclude newline character
    for (i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            uppercase = 1;
        } else if (islower(password[i])) {
            lowercase = 1;
        } else if (isdigit(password[i])) {
            numbers = 1;
        } else if (!isalnum(password[i])) {
            special_chars = 1;
        }
    }
    printf("Password strength:\n");
    printf("Length: %s\n", (length >= 8) ? "Strong" : "Weak");
    printf("Uppercase: %s\n", (uppercase) ? "Strong" : "Weak");
    printf("Lowercase: %s\n", (lowercase) ? "Strong" : "Weak");
    printf("Numbers: %s\n", (numbers) ? "Strong" : "Weak");
    printf("Special characters: %s\n", (special_chars) ? "Strong" : "Weak");

    return 0;
}
