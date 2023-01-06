#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main()
{
	char str[101];
	char stack[101];
	int len;
	int top;
	int check;

	while (1)
	{
		fgets(str, sizeof(str) * sizeof(char), stdin);
		len = strlen(str);
		top = 0;
		check = TRUE;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '[' || str[i]=='(')
			{
				if (str[i] == '[')
				{
					stack[top] = '[';
					top++;
				}
				else if (str[i] == '(')
				{
					stack[top] = '(';
					top++;
				}
			}
			else if(str[i] == ']' || str[i] == ')')
			{
				if (str[i] == ']' && stack[top - 1] == '[')
				{
					stack[top] = 0;
					top--;
				}
				else if (str[i] == ')' && stack[top - 1] == '(')
				{
					stack[top] = 0;
					top--;
				}
				else
					check = FALSE;
			}
			else if (str[i] == '.')
			{
				if (str[0] == '.')
					return 0;
				else
				{
					if (top == 0 && check == TRUE)
					{
						printf("yes\n");
						break;
					}
					else
					{
						printf("no\n");
						break;
					}
				}
			}
		}
		fflush(stdin);
	}
	return 0;
}
