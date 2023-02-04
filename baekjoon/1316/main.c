// #include <string.h>
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	char N_buf[3];
// 	int res = 0, N = 0, word_len = 0;
// 	char word[101];
// 	memset(word, 0, sizeof(char) * 100);
// 	int check[27];
// 	if (read(0, N_buf, 3) != 0)
// 		N = (int)atoi(N_buf);
// 	else
// 		return 0;
// 	if (N < 1 || N > 100)
// 		return 0;
// 	check[26] = 0;
// 	while (N--)
// 	{
// 		for (int i = 0; i < 27; i++)
// 			check[i] = 0;
// 		word_len = read(0, word, 101) - 1;
// 		if (word_len == 100 && word[100] != '\n')
// 		{
// 			while (read(0, word, 1))
// 			{
// 				if (word[0] == '\n')
// 					break ;
// 			}
// 			continue;
// 		}
// 		for (int i = 0; i < word_len; i++)
// 		{
// 			if ((word[i] < 'a' || word[i] > 'z'))// && word[i] != '\n')
// 				return 0;
// 			if (check[word[i] - 'a'] == 1)
// 			{
// 				check[26] = 1;
// 				break ;
// 			}
// 			if (i + 1 < word_len && word[i] != word[i + 1])
// 				check[word[i] - 'a'] = 1;
// 		}
// 		if (check[26] == 0)
// 			res++;
// 	}
// 	printf("%d\n", res);
// }


#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define LEN 100000

int main()
{
	char N_buf[4];
	N_buf[3] = '\0';
	int res = 0, N = 0;
	size_t word_len = 0;
	char *word = (char *)malloc(sizeof(char) * (LEN + 1));
	memset(word, 0, sizeof(char) * (LEN + 1));
	int check[27];
	if (read(0, N_buf, 3) != 0)
		N = (int)atoi(N_buf);
	else
		return 0;
	if (N < 1 || N > 100)
		return 0;
	check[26] = 0;
	while (N--) {
		word_len = LEN;
		for (int i = 0; i < 27; i++)
			check[i] = 0;
		word_len = read(0, word, word_len);
		if (word_len > 101 || word[0] == '\n' || word_len < 0) {
			check[26] = 1;
			continue;
		}
		word_len -= 1;
		for (int i = 0; i < word_len; i++) {
			if ((word[i] < 'a' || word[i] > 'z')) { 
				return 0;
			}
			if (check[word[i] - 'a'] == 1) {
				check[26] = 1;
				break ;
			}
			if (i + 1 < word_len && word[i] != word[i + 1]) {
				check[word[i] - 'a'] = 1;
			}
		}
		if (check[26] == 0) {
			res++;
		}
	}
	printf("%d\n", res);
	free (word);
}