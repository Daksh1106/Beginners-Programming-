// Write a program to decrypt the string encrpyted using encrypt function in practice 33.
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter the encrypted string: ");
    fgets(str, sizeof(str), stdin);

    // Decrypt the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') // skip newline
            str[i] = str[i] - 1;
    }

    printf("Decrypted string: %s", str);
    return 0;
}
