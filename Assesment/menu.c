#include <stdio.h>

 main() {
    int choice;

    while (1) {
    	//Declare Choice
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of a character\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count spaces and digits\n");
        printf("9. Exit\n");

       //Display Enter Choice 
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
			//Reverse a string
			int i;
            char str[100];
            printf("Enter a string: ");
            getchar(); // To clear newline left by scanf
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            int len = strlen(str);
            printf("Reversed String: ");
            for (i = len - 1; i >= 0; i--) {
                putchar(str[i]);
            }
            printf("\n");

        } 
		else if (choice == 2)
		 {
		 	//Concatenate two strings
		
            char str1[100], str2[100];
            printf("Enter first string: ");
            getchar();// Clear newlin
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';// remove newlin

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);

        } 
		else if (choice == 3)
		 {
		 	//Check if palindrome
		 	int i;
            char str[100];
            int isPalindrome = 1;
            printf("Enter a string: ");
            getchar();// Clear newlin
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';// Remove newline

            int len = strlen(str);
            for ( i = 0; i < len / 2; i++) 
			{
                if (str[i] != str[len - i - 1]) 
				{
                    isPalindrome = 0;
                    break;
                }
            }

            if (isPalindrome)
                printf("The string is a palindrome.\n");
            else
                printf("The string is not a palindrome.\n");

        } 
		else if (choice == 4) 
		{
		    //Copy a string
            char str1[100], str2[100];
            printf("Enter a string to copy: ");
            getchar();
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            strcpy(str2, str1);
            printf("Copied String: %s\n", str2);//display copy of string

        } 
		else if (choice == 5)
		 {
		 	//Length of the string
		 	char str[100];
            printf("Enter a string to find its length: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
 	
        	printf("Length of string is : %d",strlen(str));//display string length 

        } 
		else if (choice == 6)
		 {
		 	//Frequency of a character
	        int i;		
            char str[100], ch;
            int count = 0;

            printf("Enter a string: ");
            getchar();
            fgets(str, sizeof(str), stdin);

            printf("Enter a character to find its frequency: ");
            scanf("%c", &ch);

            for (i = 0; str[i] != '\0'; i++) 
			{
                if (str[i] == ch) 
				{
                    count++;
                }
            }
            printf("Frequency of '%c': %d\n", ch, count);//display frequency of char

        } 
		else if (choice == 7)
		 {
		 	//Count vowels and consonants
		 	int i;
            char str[100];
            int vowels = 0, consonants = 0;

            printf("Enter a string: ");
            getchar();
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';

            for (i = 0; str[i] != '\0'; i++) 
			{
                char ch = tolower(str[i]);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') //declare vowels
				{
                    vowels++;//increment vowels
                } 
				else if (ch >= 'a' && ch <= 'z') 
				{
                    consonants++;//increment consonants
                }
            }
            printf("Number of vowels: %d\n", vowels);//display vowels
            printf("Number of consonants: %d\n", consonants);//display consonants

        } 
		else if (choice == 8)
		 {
		 	//Count spaces and digits
		 	int i;
            char str[100];//declare char of string
            int spaces = 0, digits = 0;//declare spaces & digits

            printf("Enter a string: ");//dispaly string
            getchar();
            fgets(str, sizeof(str), stdin);//string size
            str[strcspn(str, "\n")] = '\0';

            for (i = 0; str[i] != '\0'; i++) 
			{
                if (isspace(str[i])) 
				{
                    spaces++;//increment space
                }
				 else if (isdigit(str[i])) 
				 {
                    digits++;//increment digits
                }
            }
            printf("Number of spaces: %d\n", spaces);//display spaces
            printf("Number of digits: %d\n", digits);//display digits

        } 
		else if (choice == 9)
		 {
            printf("Exiting...\n");
            break;

        } 
		else
		 {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

