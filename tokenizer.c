#include "monty.h"

/**
 *tokenizer - function to tokenize a string
 *@str: string to be tokenized
 *
 *Return: array of tokens
 */

char **tokenizer(char *str)
{

	int i = 0;
	char *token;
	char  **tokens;
	char *del = " \n";

	tokens = malloc(sizeof(char *) * 3);
	if (tokens == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	*tokens = NULL;
	token = strtok(str, del);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, del);
	}
	if (token == NULL && *tokens == NULL)
	{
		free(tokens);
		free(token);
		return (NULL);
	}
	tokens[i] = NULL;
	return (tokens);
}

