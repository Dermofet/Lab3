#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *get_str() {
    char buf[81] = {0};
    char *res = NULL;
    int len = 0;
    int n = 0;
    do {
        n = scanf("%80[^\n]", buf);
        if (n < 0) {
            if (!res) {
                return NULL;
            }
        } else if (n > 0) {
            int chunk_len = strlen(buf);
            int str_len = len + chunk_len;
            res = realloc(res, str_len + 1);
            memcpy(res + len, buf, chunk_len);
            len = str_len;
        } else {
            scanf("%*c");
        }
    } while (n > 0);

    if (len > 0) {
        res[len] = '\0';
    } else {
        res = calloc(1, sizeof(char));
    }

    return res;
}

//int count_element(char *s)
//{
//    int i;
//    while (s)
//    {
//        i++;
//    }
//    return i;
//}

//char *array(char* s)
//{
//    int k = *count_element(s);
//    int i = 0;
//    char *letter = s;
//    char arr[k];
//    printf("Technical notes\n");
//    while (letter)
//    {
//        printf("%c", letter);
//        arr[i] = *letter;
//        i++;
//    }
//    return arr;
//}

char *delete_word(char *s)
{
    char *p = NULL;
    int max = 0;
    int k = 0;
    while (*s)
    {
	if (s != " " && s != "\t")
	    {
		    printf("%s", *s);
            k++;
          	if (k > max) max = k;
	    }
	    else
        {
            printf(" %d, ", k);
            k = 0;
        }
    }
    return 0;
}
    // while (*s)
    // {
	// if (s != " " && s != "\t" )
    //     {
    //         k++;
    //         if (k == max)
    //             while (k > 0)
    //             {
    //                 *(s-k) = "";
    //                 k--;
    //             }
    //     }
    // }
    // return s;
    // }


int main()
{
    printf("Enter the string\n");
    char *s = get_str();
    char new_s = delete_word(s);
    printf("%s\n", new_s);
}
