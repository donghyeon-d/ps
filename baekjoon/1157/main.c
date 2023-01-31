#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#define LEN 1000001

int main()
{
	int len = -1;
	char str[LEN];
	int alpha[26];
	for (int i = 0; i < 26; i++)
		alpha[i] = 0;
	len = read(0, str, LEN);
	str[len] = '\0';
	if (len == -1)
		return 0;
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (isalpha(str[i]))
			{
				str[i] = toupper(str[i]);
				alpha[str[i] - 'A']++;
			}
			else
				continue;
		}
	}

	int max = 0;
	int idx;
	for (int i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			idx = i;
		}
	}

	if (max == 0)
	{
		printf("?");
		return  0;
	}
	for (int i = 0; i < 26; i++)
	{
		if (max == alpha[i] && i != idx)
		{
			printf("?\n");
			return  0;
		}
	}
	printf("%c\n", 'A' + idx);
}