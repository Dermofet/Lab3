#include <stdio.h>
#include <string.h>

char words_of_string(char string, char sep)
{
    int i;
    char *number_of_words[i][10];
    char *istr;
    istr = strtok(string, sep);
    *number_of_words[0] = istr;
    i = 1;
    while (istr != 0)
    {
        istr = strtok(NULL, sep);
        *number_of_words[i] = istr;
        i++;
    }
    return *number_of_words[i][10];
}

char LenString(char string, char sep)
{
    char *istr;
    istr = strtok(string, sep);
    int i = 1;
    while (istr != 0)
    {
        istr = strtok(NULL, sep);
        i++;
    }
    return i;
}

int LenWord (char word)
{
    int i = 0;
    while (word)
        i++;
    return i;
}

char max(char string, char sep)
{
    int i = 0;
    char *number_of_words[i][10];
    strcpy(*number_of_words[i][10], words_of_string(string, sep));
    int max_long = 0;
    char max_word[31];
    while (*number_of_words)
    {
        char *word = *number_of_words[i];
        if (max_long <= LenWord(word))
            max_long = LenWord(word);
        *max_word = *word;
    }
    return *max_word, *number_of_words[i][10];
}

char del(char string, char sep)
{
    char *max_word, *number_of_words = max(string, sep);
    *max_word = strcpy(*max_word , "");
    return *max_word, *number_of_words;
}

int main()
{
    printf("Enter strings. If you entered all strings, enter '.'. Note: The number of characters in a string not exceed 200.\n");
    int i = 0;
    char exit[2] = ".";
    char string[201];
    char sep[6][2] = {"/", ",", ".", ":", ";", " "};
    while (strcmp(string, exit) != 0)
    {
        printf("Enter new string\n");
        scanf("%s\n", &string);
        char *max_word, *number_of_words = del(string, sep);
	char max_word = *max_word;
	char number_of_words = *number_of_words;
        int j;
        while (j = 0, j <= LenString(string, sep), j++)
            printf("Modified sentence:");
            printf(" %s\n", &number_of_words);
        i++;
    }
}
