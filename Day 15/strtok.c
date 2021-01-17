#include <stdio.h>
#include <string.h>

int main()
{
    char input_string[] = "Hello from ysquare";
    char token_list[20][20];
    char *token = strtok(input_string, " ");
    // We call strtok(input, delim) to get our first token
    int num_tokens = 0;
    while (token != NULL)
    {
        // Keep getting tokens until we receive NULL from strtok()
        strcpy(token_list[num_tokens], token);
        num_tokens++;
        token = strtok(NULL, " "); // Get the next token. Notice that input=NULL now!
    }
    // Print the list of tokens
    printf("Token List:\n");
    for (int i = 0; i < num_tokens; i++)
    {
        printf("%s\n", token_list[i]);
    }
    return 0;
}
// strtok_s strtok_r