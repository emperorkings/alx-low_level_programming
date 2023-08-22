#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * generate_password - Generates a random password
 * @password: Pointer to the buffer where the password will be stored
 * @length: Length of the password to generate
 */
void generate_password(char *password, int length)
{
	// Define a character set for the password
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for (int i = 0; i < length; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	password[length] = '\0';
}

/**
 * validate_password - Validates a password using the "101-crackme" logic
 * @password: Password to be validated
 * Return: 0 if the password is valid, non-zero otherwise
 */
int validate_password(const char *password)
{
	// Replace this with the actual validation logic
	// Return 0 for valid passwords, non-zero for invalid
	if (strcmp(password, "validpass") == 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	srand(time(NULL));

	int password_length = 8;
	char password[password_length + 1];

	while (1)
	{
		generate_password(password, password_length);
		if (validate_password(password) == 0)
		{
			printf("Valid Password: %s\n", password);
			break;
		}
	}

	return 0;
}

