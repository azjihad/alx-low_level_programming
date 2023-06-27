#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int passwordLength = 12; // Set the desired password length
    char password[13]; // Array to store the generated password

    srand(time(NULL)); // Initialize the random seed

    for (int i = 0; i < passwordLength; i++)
    {
        int randomNum = rand() % 62; // Generate a random number between 0 and 61

        // Assign the corresponding character based on the random number
        if (randomNum < 26)
            password[i] = 'a' + randomNum; // Lowercase letters
        else if (randomNum < 52)
            password[i] = 'A' + randomNum - 26; // Uppercase letters
        else
            password[i] = '0' + randomNum - 52; // Digits
    }

    password[passwordLength] = '\0'; // Add the null terminator

    printf("%s\n", password); // Print the generated password

    return 0;
}
