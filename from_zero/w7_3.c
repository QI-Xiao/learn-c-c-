#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hello";
	char aaa[] = "hello";
	char line[10] = "hello";
	
	char t[8] = "title";
	printf("tttt%s\n", t);

	char *s;
	s = t;
	printf("ssss%s\n", s);
	
//	char word[8];
//	char word2[8];
//	scanf("%7s", word);
//	scanf("%7s", word2);
//	printf("%s##%s##\n", word, word2);
	
	printf("%lu\n", strlen(line));
	printf("%lu\n", sizeof(line));
	
	char s1[] = "abc";
	char s2[] = "bbc";
	
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", "a"-"A");

	return 0;
}
