#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

#define MIN_INT -2147483648
#define MAX_INT 2147483647 

int check_isalpha()
{
	int ok = 1;
	int flag = 1;

	ok = ft_isalpha('a') == 0 == isalpha('a') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 1 FAILED\n");

	ok = ft_isalpha('A') == 0  == isalpha('A') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 2 FAILED\n");

	ok = ft_isalpha('-') == 0 == isalpha('-') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 3 FAILED\n");

	ok = ft_isalpha('5') == 0 == isalpha('5') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 4 FAILED\n");

	ok = ft_isalpha('z') == 0 == isalpha('z') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 5 FAILED\n");
	
	ok = ft_isalpha('H') == 0 == isalpha('H') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 6 FAILED\n");

	ok = ft_isalpha(290) == 0 == isalpha(290) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 7 FAILED\n");
	
	ok = ft_isalpha('Z') == 0 == isalpha('Z') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 8 FAILED\n");

	return flag;
}

int check_isdigit()
{
	int ok = 1;
	int flag = 1;

	ok = ft_isdigit('0') == 0 == isdigit('0') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 1 FAILED\n");

	ok = ft_isdigit('9') == 0 == isdigit('9') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 2 FAILED\n");

	ok = ft_isdigit('-') == 0 == isdigit('-') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 3 FAILED\n");

	ok = ft_isdigit('5') == 0 == isdigit('5') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 4 FAILED\n");

	ok = ft_isdigit('z') == 0 == isdigit('z') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 5 FAILED\n");
	
	ok = ft_isdigit('H') == 0 == isdigit('H') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 6 FAILED\n");

	ok = ft_isdigit(256 + 70) == 0 == isdigit(256 + 70) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 7 FAILED\n");
	
	ok = ft_isdigit('Z') == 0 == isdigit('Z') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 8 FAILED\n");

	return flag;
}

int check_isalnum()
{
	int ok = 1;
	int flag = 1;

	ok = ft_isalnum('0') == 0 == isalnum('0') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 1 FAILED\n");

	ok = ft_isalnum('9') == 0 == isalnum('9') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 2 FAILED\n");

	ok = ft_isalnum('-') == 0 == isalnum('-') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 3 FAILED\n");

	ok = ft_isalnum('5') == 0 == isalnum('5') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 4 FAILED\n");

	ok = ft_isalnum('z') == 0 == isalnum('z') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 5 FAILED\n");
	
	ok = ft_isalnum('H') == 0 == isalnum('H') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 6 FAILED\n");

	ok = ft_isalnum(256 + 70) == 0 == isalnum(256 + 70) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 7 FAILED\n");
	
	ok = ft_isalnum('Z') == 0 == isalnum('Z') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 8 FAILED\n");

	return flag;
}

int check_isascii()
{
	int ok = 1;
	int flag = 1;

	ok = ft_isascii('0') == 0 == isascii('0') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 1 FAILED\n");

	ok = ft_isascii('9') == 0 == isascii('9') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 2 FAILED\n");

	ok = ft_isascii('-') == 0 == isascii('-') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 3 FAILED\n");

	ok = ft_isascii('5') == 0 == isascii('5') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 4 FAILED\n");

	ok = ft_isascii(53213) == 0 == isascii(53213) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 5 FAILED\n");
	
	ok = ft_isascii('H') == 0 == isascii('H') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 6 FAILED\n");

	ok = ft_isascii(256 + 70) == 0 == isascii(256 + 70) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 7 FAILED\n");
	
	ok = ft_isascii(-5) == 0 == isascii(-5) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 8 FAILED\n");

	return flag;
}

int check_isprint()
{
	int ok = 1;
	int flag = 1;

	ok = ft_isprint('0') == 0 == isprint('0') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 1 FAILED\n");

	ok = ft_isprint('9') == 0 == isprint('9') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 2 FAILED\n");

	ok = ft_isprint('-') == 0 == isprint('-') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 3 FAILED\n");

	ok = ft_isprint('5') == 0 == isprint('5') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 4 FAILED\n");

	ok = ft_isprint(53213) == 0 == isprint(53213) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 5 FAILED\n");
	
	ok = ft_isprint('H') == 0 == isprint('H') == 0;
	if (!ok && !(flag = 0))
		printf("  Test 6 FAILED\n");

	ok = ft_isprint(256 + 40) == 0 == isprint(256 + 40) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 7 FAILED\n");
	
	ok = ft_isprint(-5) == 0 == isprint(-5) == 0;
	if (!ok && !(flag = 0))
		printf("  Test 8 FAILED\n");

	return flag;
}

int check_strlen()
{
	int ok = 1;	
	int flag = 1;

	ok = ft_strlen("12354") == strlen("12354");
	if (!ok && !(flag = 0))
		printf("  Test 1 FAILED\n");
	ok = ft_strlen("") == strlen("");
	if (!ok && !(flag = 0))
		printf("  Test 2 FAILED\n");
	ok = ft_strlen("g") == strlen("g");
	if (!ok && !(flag = 0))
		printf("  Test 3 FAILED\n");
	ok = ft_strlen("\0") == strlen("\0");
	if (!ok && !(flag = 0))
		printf("  Test 4 FAILED\n");
	ok = ft_strlen("yes\0no") == strlen("yes\0no");
	if (!ok && !(flag = 0))
		printf("  Test 5 FAILED\n");
	return ok;
}

int check_memset()
{
	int ok = 1;	
	int flag = 1;

	{
		int a = MAX_INT, b = MAX_INT, size = sizeof(int);
		memset(&a, 120, size); ft_memset(&b, 120, size);
		if (a != b && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}
	
	{
		double a = 432.5, b = 432.5, size = sizeof(double) - 1;
		memset(&a, MAX_INT, size); ft_memset(&b, MAX_INT, size);
		if (a != b && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}
	
	{
		unsigned int a = 1, b = 1, size = 0;
		memset(&a, 1337, size); ft_memset(&b, 1337, size);
		if (a != b && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}

	return flag;
}

int check_bzero()
{
	int flag = 1;

	{
		int a = MAX_INT, b = MAX_INT, size = sizeof(int);
		bzero(&a, size); ft_bzero(&b, size);
		if (a != b && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}
	
	{
		double a = 432.5, b = 432.5, size = sizeof(double) - 1;
		bzero(&a, size); ft_bzero(&b, size);
		if (a != b && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}
	
	{
		unsigned int a = 1, b = 1, size = 0;
		bzero(&a, size); ft_bzero(&b, size);
		if (a != b && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}

	return flag;
}

int check_memcpy()
{
	int flag = 1;
	
	{
		int a = MAX_INT, b1 = 0, b2 = 0,  size = sizeof(int);
		memcpy(&b1, &a, size); ft_memcpy(&b2, &a, size);
		if (b1 != b2 && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}	

	{
		int a = MAX_INT, b1 = 0, b2 = 0,  size = 0;
		memcpy(&b1, &a, size); ft_memcpy(&b2, &a, size);
		if (b1 != b2 && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}	

	{
		double a = 53125132.12, b1, b2;
		int size = sizeof(double) - 1;
		memcpy(&b1, &a, size); ft_memcpy(&b2, &a, size);
		if (b1 != b2 && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}	

	{
		const char *a = "test";
		char b1[5], b2[5];
		int size = sizeof(char) * 5;
		memcpy(b1, a, size); ft_memcpy(b2, a, size);
		if (strncmp(b1, b2, 4) && !(flag = 0))
			printf("  Test 4 FAILED\n");
	}	

	char * big = (char *) "123456789";
	char * little = (char *) "9";
	size_t max = 8;
	char *s1 = strnstr(big, little, max);
	char *s2 = ft_strnstr(big, little, max);
	printf("_%s_ _%s_\n", s1, s2);
	return flag;	
}

int check_toupper()
{
	int flag = 1;

	if (ft_toupper('A') != toupper('A') && !(flag = 0))
		printf("  Test 1 FAILED\n");

	if (ft_toupper('a') != toupper('a') && !(flag = 0))
		printf("  Test 2 FAILED\n");

	if (ft_toupper('z') != toupper('z') && !(flag = 0))
		printf("  Test 3 FAILED\n");

	if (ft_toupper('Z') != toupper('Z') && !(flag = 0))
		printf("  Test 4 FAILED\n");

	if (ft_toupper('-') != toupper('-') && !(flag = 0))
		printf("  Test 5 FAILED\n");

	if (ft_toupper('q') != toupper('q') && !(flag = 0))
		printf("  Test 6 FAILED\n");

	return flag;
}

int check_tolower()
{
	int flag = 1;

	if (ft_toupper('A') != toupper('A') && !(flag = 0))
		printf("  Test 1 FAILED\n");

	if (ft_toupper('a') != toupper('a') && !(flag = 0))
		printf("  Test 2 FAILED\n");

	if (ft_toupper('z') != toupper('z') && !(flag = 0))
		printf("  Test 3 FAILED\n");

	if (ft_toupper('Z') != toupper('Z') && !(flag = 0))
		printf("  Test 4 FAILED\n");

	if (ft_toupper('-') != toupper('-') && !(flag = 0))
		printf("  Test 5 FAILED\n");

	if (ft_toupper('Q') != toupper('Q') && !(flag = 0))
		printf("  Test 6 FAILED\n");

	return flag;
}

int check_strchr()
{
	int flag = 1;
	
	char const *s1 = "12345";
	if (strchr(s1, '3') != ft_strchr(s1, '3') && !(flag = 0))
		printf("  Test 1 FAILED\n");
	if (strchr(s1, '0') != ft_strchr(s1, '0') && !(flag = 0))
		printf("  Test 2 FAILED\n");
	if (strchr(s1, '\0') != ft_strchr(s1, '\0') && !(flag = 0))
		printf("  Test 3 FAILED\n");
	if (strchr(s1, '1') != ft_strchr(s1, '1') && !(flag = 0))
		printf("  Test 4 FAILED\n");
	if (strchr(s1, '5') != ft_strchr(s1, '5') && !(flag = 0))
		printf("  Test 5 FAILED\n");

	char const *s2 = "";
	if (strchr(s2, '!') != ft_strchr(s2, '!') && !(flag = 0))
		printf("  Test 6 FAILED\n");

	return flag;
}

int check_strrchr()
{
	int flag = 1;
	
	char const *s1 = "11234536";
	if (strrchr(s1, '3') != ft_strrchr(s1, '3') && !(flag = 0))
		printf("  Test 1 FAILED\n");
	if (strrchr(s1, '0') != ft_strrchr(s1, '0') && !(flag = 0))
		printf("  Test 2 FAILED\n");
	if (strrchr(s1, '1') != ft_strrchr(s1, '1') && !(flag = 0))
		printf("  Test 3 FAILED\n");
	if (strrchr(s1, '\0') != ft_strrchr(s1, '\0') && !(flag = 0))
		printf("  Test 4 FAILED\n");
	if (strrchr(s1, '6') != ft_strrchr(s1, '6') && !(flag = 0))
		printf("  Test 5 FAILED\n");

	char const *s2 = "";
	if (strrchr(s1, '!') != ft_strrchr(s1, '!') && !(flag = 0))
		printf("  Test 6 FAILED\n");

	return flag;
}

int check_strncmp()
{
	int flag = 1;

	if (ft_strncmp("123", "123", 3) != 0 && !(flag = 0))	
		printf("  Test 1 FAILED\n");
	if (ft_strncmp("123", "133", 3) >= 0 && !(flag = 0))	
		printf("  Test 2 FAILED\n");
	if (ft_strncmp("", "", 1) != 0 && !(flag = 0))	
		printf("  Test 3 FAILED\n");
	if (ft_strncmp("abczef", "abdef", 6) >= 0 && !(flag = 0))	
		printf("  Test 4 FAILED\n");
	if (ft_strncmp("123", "12456", 3) >= 0 && !(flag = 0))	
		printf("  Test 5 FAILED\n");
	if (ft_strncmp("12456", "123", 3) <= 0 && !(flag = 0))	
		printf("  Test 6 FAILED\n");
	if (ft_strncmp("1", "\0", 1) <= 0 && !(flag = 0))	
		printf("  Test 7 FAILED\n");
	if (ft_strncmp("b\0", "bgh", 1) != 0 && !(flag = 0))	
		printf("  Test 8 FAILED\n");
	if (ft_strncmp("qwerty", "qwerty", 1337) != 0 && !(flag = 0))	
		printf("  Test 9 FAILED\n");
	if (ft_strncmp("qwerty", "qwertz", 4) != 0 && !(flag = 0))	
		printf("  Test 10 FAILED\n");

	return flag;	
}

int check_memchr()
{
	int flag = 1;
	
	char const *s1 = "11234536";
	if (memchr(s1, '3', 5) != ft_memchr(s1, '3', 5) && !(flag = 0))
		printf("  Test 1 FAILED\n");
	if (memchr(s1, '0', 8) != ft_memchr(s1, '0', 8) && !(flag = 0))
		printf("  Test 2 FAILED\n");
	if (memchr(s1, '1', 8) != ft_memchr(s1, '1', 8) && !(flag = 0))
		printf("  Test 3 FAILED\n");
	if (memchr(s1, '\0', 9) != ft_memchr(s1, '\0', 9) && !(flag = 0))
		printf("  Test 4 FAILED\n");
	if (memchr(s1, '6', 8) != ft_memchr(s1, '6', 8) && !(flag = 0))
		printf("  Test 5 FAILED\n");

	char const *s2 = "";
	if (memchr(s1, '!', 1) != ft_memchr(s1, '!', 1) && !(flag = 0))
		printf("  Test 6 FAILED\n");

	int a = 1337;
	if (memchr(&a, 1337, sizeof(int)) != ft_memchr(&a, 1337, sizeof(int)) && !(flag = 0))
		printf("  Test 7 FAILED\n");

	return flag;
}

int check_memcmp()
{
	int flag = 1;

//	if (ft_memcmp("123", "123", 3) != 0 && !(flag = 0))	
//		printf("  Test 1 FAILED\n");
//	if (ft_memcmp("123", "133", 3) >= 0 && !(flag = 0))	
//		printf("  Test 2 FAILED\n");
//	if (ft_memcmp("", "", 1) != 0 && !(flag = 0))	
//		printf("  Test 3 FAILED\n");
//	if (ft_memcmp("abczef", "abdef", 6) >= 0 && !(flag = 0))	
//		printf("  Test 4 FAILED\n");
//	if (ft_memcmp("123", "12456", 3) >= 0 && !(flag = 0))	
//		printf("  Test 5 FAILED\n");
//	if (ft_memcmp("12456", "123", 3) <= 0 && !(flag = 0))	
//		printf("  Test 6 FAILED\n");
//	if (ft_memcmp("1", "\0", 1) <= 0 && !(flag = 0))	
//		printf("  Test 7 FAILED\n");
//	if (ft_memcmp("b\0", "bgh", 1) != 0 && !(flag = 0))	
//		printf("  Test 8 FAILED\n");
//	if (ft_memcmp("qwerty", "qwerty", 1337) != 0 && !(flag = 0))	
//		printf("  Test 9 FAILED\n");
//	if (ft_memcmp("qwerty", "qwertz", 4) != 0 && !(flag = 0))	
//		printf("  Test 10 FAILED\n");

	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 127, 0};
	/* 5 */ printf("%d\n", ft_memcmp(s2, s3, 4));
//	if (ft_memcmp(&test1, &test2, sizeof(int)) != 0 && !(flag = 0))
//			printf(" Test 11 FAILED\n");
	return flag;	
}

int check_substr()
{
	int flag = 1;

//	if (strcmp(ft_substr("12345", 2, 1000), "345") != 0 && !(flag = 0))
//		printf("  Test 1 FAILED\n");
//	if (strcmp(ft_substr("12345", 2, 1), "3") != 0 && !(flag = 0))
//		printf("  Test 2 FAILED\n");
//	if (strcmp(ft_substr("12345", 2, 0), "") != 0 && !(flag = 0))
//		printf("  Test 3 FAILED\n");
//	if (ft_substr("12345", 32, 1) != 0 && !(flag = 0))
//		printf("  Test 4 FAILED\n");
//	if (strcmp(ft_substr("hello world!", 0, 12), "hello world!") != 0 && !(flag = 0))
//		printf("  Test 5 FAILED\n");
//	if (strcmp(ft_substr("hello world!", 7, 12), "orld!") != 0 && !(flag = 0))
//		printf("  Test 6 FAILED\n");
//	if (strcmp(ft_substr("hello world!", 7, 3), "orl") != 0 && !(flag = 0))
//		printf("  Test 7 FAILED\n");
	printf("_%s-\n", ft_substr("tripouille", 100, 1));
	///* 5 */ check(!strcmp(s, ""));
	///* 6 */ mcheck(s, 1); free(s); showLeaks();
	return flag;	
}

int check_strjoin()
{
	int flag = 1;

	if (strcmp(ft_strjoin("A", "B"), "AB") != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");
	if (strcmp(ft_strjoin("A", ""), "A") != 0 && !(flag = 0))
		printf("  Test 2 FAILED\n");
	if (strcmp(ft_strjoin("", ""), "") != 0 && !(flag = 0))
		printf("  Test 3 FAILED\n");
	if (strcmp(ft_strjoin("", "B"), "B") != 0 && !(flag = 0))
		printf("  Test 4 FAILED\n");
	if (strcmp(ft_strjoin("Hello ", "world!"), "Hello world!") != 0 && !(flag = 0))
		printf("  Test 5 FAILED\n");
	if (strcmp(ft_strjoin("", "mmmm"), "mmmm") != 0 && !(flag = 0))
		printf("  Test 6 FAILED\n");
	return flag;
}

int check_strtrim()
{
	int flag = 1;

	if (strcmp(ft_strtrim("aaaaa", "ab"), "") != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");
	if (strcmp(ft_strtrim("aaaaab", "ab"), "") != 0 && !(flag = 0))
		printf("  Test 2 FAILED\n");
	if (strcmp(ft_strtrim("aaaaaxb", "ab"), "x") != 0 && !(flag = 0))
		printf("  Test 3 FAILED\n");
	if (strcmp(ft_strtrim("aaaaadxcxxxbdc", "abcd"), "xcxxx") != 0 && !(flag = 0))
		printf("  Test 4 FAILED\n");
	if (strcmp(ft_strtrim("", "ab"), "") != 0 && !(flag = 0))
		printf("  Test 5 FAILED\n");
	if (strcmp(ft_strtrim("axxxxxa", "a"), "xxxxx") != 0 && !(flag = 0))
		printf("  Test 6 FAILED\n");
	if (strcmp(ft_strtrim("aaaaaax", "a"), "x") != 0 && !(flag = 0))
		printf("  Test 7 FAILED\n");
	if (strcmp(ft_strtrim("xaaaaaa", "a"), "x") != 0 && !(flag = 0))
		printf("  Test 8 FAILED\n");

	return flag;
}

int check_split()
{
	int flag = 1;

	{
		char **result = ft_split("  sga sa asa h ", ' ');
		if ((strcmp(result[0], "sga") != 0 || strcmp(result[1], "sa") != 0 || strcmp(result[2], "asa") != 0 
				|| strcmp(result[3], "h") || result[4] != 0) && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}

	{
		char **result = ft_split("", ' ');
		if (result[0] != 0 && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}

	{
		char **result = ft_split("!!!!hello!world!!:)", '!');
		if ((strcmp(result[0], "hello") != 0 || strcmp(result[1], "world") != 0 
				|| strcmp(result[2], ":)") != 0 || result[3] != 0) && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}

	return flag;
}

int check_itoa()
{
	int flag = 1;

	if (strcmp(ft_itoa(0), "0") != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");
	if (strcmp(ft_itoa(-132), "-132") != 0 && !(flag = 0))
		printf("  Test 2 FAILED\n");
	if (strcmp(ft_itoa(5131), "5131") != 0 && !(flag = 0))
		printf("  Test 3 FAILED\n");
	if (strcmp(ft_itoa(MAX_INT), "2147483647") != 0 && !(flag = 0))
		printf("  Test 4 FAILED\n");
	if (strcmp(ft_itoa(MIN_INT), "-2147483648") != 0 && !(flag = 0))
		printf("  Test 5 FAILED\n");
	return flag;
}

char f(unsigned int i, char c) {
	return c + i;
}

int check_strmapi()
{
	int flag = 1;
	
	char const *s1 = "0000000000";
	if (strcmp(ft_strmapi(s1, f), "0123456789") != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");

	return flag;
}

void f1(unsigned int i, char *c) {
	*c = *c + i;
}

int check_striteri()
{
	int flag = 1;

	char s[11] = "0000000000";
	ft_striteri(s, f1);
	if (strcmp(s, "0123456789") != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");

	return flag;
}

void check_putchar_fd()
{
	ft_putchar_fd('s', 1);
	ft_putchar_fd('c', 1);
	ft_putchar_fd('h', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('2', 1);
	ft_putchar_fd('1', 1);
	ft_putchar_fd('\n', 1);
}

void check_putstr_fd()
{
	char s[13] = "hello world\n";	
	ft_putstr_fd(s, 1);
}

void check_putendl_fd()
{
	char s[13] = "hello world";
	ft_putendl_fd(s, 1);
}

void check_putnbr_fd()
{

	char s[13] = "hello world";
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(12356, 1);
	printf("\n");
	ft_putnbr_fd(-53211, 1);
	printf("\n");
	ft_putnbr_fd(1, 1);
	printf("\n");
	ft_putnbr_fd(-1, 1);
	printf("\n");
	ft_putnbr_fd(MAX_INT, 1);
	printf("\n");
	ft_putnbr_fd(MIN_INT, 1);
	printf("\n");
}

int	check_memmove()
{
	int flag = 1;
	
	{
		int a = MAX_INT, b1, b2,  size = sizeof(int);
		memmove(&b1, &a, size); ft_memmove(&b2, &a, size);
		if (b1 != b2 && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}	
	
	{
		char a1[] = "I hate memmove!!!\0";
		char a2[] = "I hate memmove!!!\0";
		memmove(a1 + 2, a1 + 7, 3);
		memmove(a2 + 2, a2 + 7, 3);
		if (ft_strncmp(a1, a2, 17) && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}	

	return flag;
}

int	check_strlcat()
{
	int flag = 1;
	//{
	//	char a1[20] = "Hello_\0";
	//	char a2[20] = "Hello_\0";
	//	char b[10] = "World\0";
	//	int d1, d2;
	//	d1 = ft_strlcat(a1, b, 20);
	//	d2 = strlcat(a2, b, 20);
	//	//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
	//	if ((d1 != d2 || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
	//		printf("  Test 1 FAILED\n");
	//}
	//{
	//	char a1[20] = "Hello_\0";
	//	char a2[20] = "Hello_\0";
	//	char b[10] = "World\0";
	//	if ((ft_strlcat(a1, b, 10) != strlcat(a2, b, 10) || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
	//		printf("  Test 2 FAILED\n");
	//}
	//{
	//	char a1[12] = "Hello_\0";
	//	char a2[12] = "Hello_\0";
	//	char b[40] = "WorldWorldWorldWorldWorldWorld\0";
	//	if ((ft_strlcat(a1, b, 12) != strlcat(a2, b, 12) || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
	//		printf("  Test 3 FAILED\n");
	//	//printf("ft = %s, std = %s\n", a1, a2);
	//}
	//{
	//	char a1[12] = "\0";
	//	char a2[12] = "\0";
	//	char b[40] = "Hello_WorldWorldWorldWorldWorldWorld\0";
	//	if ((ft_strlcat(a1, b, 12) != strlcat(a2, b, 12) || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
	//		printf("  Test 4 FAILED\n");
	//	//printf("ft = %s, std = %s\n", a1, a2);
	//}
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
 	printf("%lu\n", ft_strlcat(dest, src, 0)); printf("%c\n", dest[0]);
	dest[0] = 'B';
 	printf("%lu\n", strlcat(dest, src, 0)); printf("%c\n", dest[0]);
	///* 2 */ check(ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B")); showLeaks();
	return flag;
}

int	check_strlcpy()
{
	int flag = 1;
//	{
//		char a1[20] = "Hello_\0";
//		char a2[20] = "Hello_\0";
//		char b[10] = "World\0";
//		int d1, d2;
//		d1 = ft_strlcpy(a1, b, 20);
//		d2 = strlcpy(a2, b, 20);
//		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
//		if ((d1 != d2 || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
//			printf("  Test 1 FAILED\n");
//	}
//	{
//		char a1[20] = "Hello_\0";
//		char a2[20] = "Hello_\0";
//		char b[10] = "World\0";
//		if ((ft_strlcpy(a1, b, 6) != strlcpy(a2, b, 6) || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
//			printf("  Test 2 FAILED\n");
//	}
//	{
//		char a1[20] = "Hello_\0";
//		char a2[20] = "Hello_\0";
//		char b[40] = "WorldWorldWorldWorldWorldWorld\0";
//		if ((ft_strlcpy(a1, b, 10) != strlcpy(a2, b, 10) || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
//			printf("  Test 3 FAILED\n");
//		//printf("ft = %s, std = %s\n", a1, a2);
//	}
//	{
//		char a1[12] = "\0";
//		char a2[12] = "\0";
//		char b[40] = "Hello_WorldWorldWorldWorldWorldWorld\0";
//		if ((ft_strlcpy(a1, b, 12) != strlcpy(a2, b, 12) || (ft_strncmp(a1, a2, ft_strlen(a1)))) && !(flag = 0))
//			printf("  Test 4 FAILED\n");
//		//printf("ft = %s, std = %s\n", a1, a2);
//	}
	char src[7] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	printf("%lu\n", ft_strlcpy(dest, src, 0)); printf("%c\n", dest[0]);
	/* 2 */ printf("%lu\n", ft_strlcpy(dest, src, 1)); 
	return flag;
}

int	check_strnstr()
{
	int flag = 1;
	{
		char a1[20] = "Hello_World\0";
		char a2[20] = "Hello_World\0";
		char b[10] = "Wor\0";
		char  *d1, *d2;
		d1 = ft_strnstr(a1, b, 20);
		d2 = strnstr(a2, b, 20);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if (ft_strncmp(d1, d2, ft_strlen(a1)) && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}
	{
		char a1[20] = "Hello_World\0";
		char a2[20] = "Hello_World\0";
		char b[10] = "World\0";
		char  *d1, *d2;
		d1 = ft_strnstr(a1, b, 20);
		d2 = strnstr(a2, b, 20);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if (ft_strncmp(d1, d2, ft_strlen(a1)) && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}
	{
		char a1[20] = "Hello_World\0";
		char a2[20] = "Hello_World\0";
		char b[10] = "\0";
		char  *d1, *d2;
		d1 = ft_strnstr(a1, b, 20);
		d2 = strnstr(a2, b, 20);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if (ft_strncmp(d1, d2, ft_strlen(a1)) && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}
	{
		char a1[20] = "Hello_World\0";
		char a2[20] = "Hello_World\0";
		char b[10] = "123\0";
		char  *d1, *d2;
		d1 = ft_strnstr(a1, b, 20);
		d2 = strnstr(a2, b, 20);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if (d1 != d2 && !(flag = 0))
			printf("  Test 4 FAILED\n");
	}
	char * big = (char *)"123456789";
	char * little = (char *)"9";
	size_t max = 8;
	char *s1 = strnstr(big, little, max);
	char *s2 = ft_strnstr(big, little, max);
	printf("c _%s_ my _%s_\n", s1, s2);
	return flag;
}

int	check_atoi()
{
	int	flag = 1;
	{
		char	s1[100] = "12345\0";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}
	{
		char	s1[100] = "  -+12345\0";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}
	
	{
		char s1[100] = "  \f\n\r\t\v+12345\0";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}
	{
		char s1[100] = "  +1234ab567";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 4 FAILED\n");
	}
	{
		char s1[100] = " +005\0";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 5 FAILED\n");
	}
	{
		char s1[100] = "0\0";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 6 FAILED\n");
	}
	{
		char s1[100] = "\0";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 7 FAILED\n");
	}
	{
		char s1[100] = "      -abbc";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 8 FAILED\n");
	}
	{
		char s1[100] = "      !";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 9 FAILED\n");
	}
	{
		char s1[100] = "a";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 10 FAILED\n");
	}
	{
		char s1[100] = "--+";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 11 FAILED\n");
	}
	{
		char s1[100] = "-2147483648";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 12 FAILED\n");
	}
	{
		char s1[100] = "2147483647";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 13 FAILED\n");
	}
	{
		char s1[100] = "-1234";
		if (atoi(s1) != ft_atoi(s1) && !(flag = 0))
			printf("  Test 14 FAILED\n");
	}
	char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	printf("%d %d\n", i1, i2);
	return flag;
}

int	check_calloc()
{
	int flag = 1;
	{
		int	*a1, *a2;
		a1 = (int *) calloc(10, sizeof(int));
		a2 = (int *) ft_calloc(10, sizeof(int));
		for (int i = 0; i < 10; ++i)
		{
			a1[i] = i + 1;
			a2[i] = i + 1;
		}
		for (int i = 0; i < 10; ++i)
		{
			if (a1[i] != a2[i] && !(flag = 0))
			{
				printf("  Test 1 FAILED\n");
					break ;
			}
		}
	}

	{
		char	*a1, *a2;
		a1 = (char *) calloc(10, sizeof(char));
		a2 = (char *) ft_calloc(10, sizeof(char));
		for (int i = 0; i < 10; ++i)
		{
			a1[i] = i + 'A';
			a2[i] = i + 'A';
		}
		for (int i = 0; i < 10; ++i)
		{
			if (a1[i] != a2[i] && !(flag = 0))
			{
				printf("  Test 2 FAILED\n");
					break ;
			}
		}
	}
	return flag;
}

int	check_strdup()
{
	int flag = 1;
	{
		char a[20] = "Hello_World\0";
		char *d1, *d2;
		d1 = ft_strdup(a);
		d2 = strdup(a);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if ((ft_strlen(d1) != ft_strlen(d2) || (ft_strncmp(d1, d2, ft_strlen(d1)))) && !(flag = 0))
			printf("  Test 1 FAILED\n");
	}
	{
		char a[20] = "\0";
		char *d1, *d2;
		d1 = ft_strdup(a);
		d2 = strdup(a);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if ((ft_strlen(d1) != ft_strlen(d2) || (ft_strncmp(d1, d2, ft_strlen(d1)))) && !(flag = 0))
			printf("  Test 2 FAILED\n");
	}
	{
		char a[20] = "School 21\0";
		char *d1, *d2;
		d1 = ft_strdup(a);
		d2 = strdup(a);
		//printf("ft = %d, std = %d, a1 = %s, a2 = %s\n", d1, d2, a1, a2);
		if ((ft_strlen(d1) != ft_strlen(d2) || (ft_strncmp(d1, d2, ft_strlen(d1)))) && !(flag = 0))
			printf("  Test 3 FAILED\n");
	}
	return flag;
}

void print_list(t_list *list)
{
	while (list)
	{
		printf("%d->", *((int *) list->content));
		list = list->next;
	}
	printf("NULL\n");
}

void check_lstnew()
{
	int first = 1, second = 2, third = 3;
	t_list *list = ft_lstnew(&first);
	list->next = ft_lstnew(&second);
	list->next->next = ft_lstnew(&third);
	print_list(list);
}

void check_lstadd_front()
{
	int first = 1, second = 2, third = 3;
	t_list *list = NULL;
	t_list *add1 = ft_lstnew(&second);
	t_list *add2 = ft_lstnew(&first);
	ft_lstadd_front(&list, add1);	
	ft_lstadd_front(&list, add2);	
	print_list(list);
}

int check_lstsize()
{
	int flag = 1;

	int first = 1, second = 2, third = 3;
	t_list *list = NULL;
	
	if (ft_lstsize(list) != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");
	list = ft_lstnew(&second);
	if (ft_lstsize(list) != 1 && !(flag = 0))
		printf("  Test 2 FAILED\n");
	list->next = ft_lstnew(&second);
	list->next->next = ft_lstnew(&second);
	if (ft_lstsize(list) != 3 && !(flag = 0))
		printf("  Test 3 FAILED\n");

	return flag;
}

int check_lstlast()
{
	int flag;
	
	int first = 1, second = 2, third = 3;
	t_list *list = NULL;

	if (ft_lstlast(list) != 0 && !(flag = 0))
		printf("  Test 1 FAILED\n");
	list = ft_lstnew(&first);
	if (*((int *)ft_lstlast(list)->content) != 1 && !(flag = 0))
		printf("  Test 2 FAILED\n");
	list->next = ft_lstnew(&second);
	if (*((int *)ft_lstlast(list)->content) != 2 && !(flag = 0))
		printf("  Test 3 FAILED\n");
	return flag;
}

void check_lstadd_back()
{
	int first = 1, second = 2, third = 3;
	t_list *list = NULL;
	t_list *add1 = ft_lstnew(&second);
	t_list *add2 = ft_lstnew(&first);
	ft_lstadd_back(&list, add1);	
	ft_lstadd_back(&list, add2);	
	print_list(list);
}

void f_lstiter(void *a)
{
	*((int *) a) = *((int *) a) + 1;	
}

void check_lstiter()
{
	int first = 1, second = 2, third = 3;
	t_list *list = NULL;
	t_list *add1 = ft_lstnew(&first);
	t_list *add2 = ft_lstnew(&second);
	t_list *add3 = ft_lstnew(&third);
	ft_lstadd_back(&list, add1);	
	ft_lstadd_back(&list, add2);	
	ft_lstadd_back(&list, add3);	
	print_list(list);
	ft_lstiter(list, f_lstiter);
	print_list(list);
}

void del(void * a) {}

int ggwp = 1001;

void *f_lstmap(void *a)
{
	int *p = &ggwp;
	return p;
}

void check_lstmap()
{
	int first = 1, second = 2, third = 3;
	t_list *list = NULL;
	t_list *result = NULL;
	t_list *add1 = ft_lstnew(&first);
	t_list *add2 = ft_lstnew(&second);
	t_list *add3 = ft_lstnew(&third);
	ft_lstadd_back(&list, add1);	
	ft_lstadd_back(&list, add2);	
	ft_lstadd_back(&list, add3);	
	print_list(list);
	result = ft_lstmap(list, f_lstmap, del);
	print_list(list);
	print_list(result);

}

int main()
{
	printf("--------PART1--------\n");
	printf("\n");

	printf("ISALPHA: Testing...\n");
	printf("ISAPLHA: %s\n", check_isalpha() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("ISDIGIT: Testing...\n");
	printf("ISDIGIT: %s\n", check_isdigit() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("ISALNUM: Testing...\n");
	printf("ISALNUM: %s\n", check_isalnum() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("ISASCII: Testing...\n");
	printf("ISASCII: %s\n", check_isascii() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("ISPRINT: Testing...\n");
	printf("ISPRINT: %s\n", check_isprint() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRLEN: Testing...\n");
	printf("STRLEN: %s\n", check_strlen() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRLEN: Testing...\n");
	printf("STRLEN: %s\n", check_strlen() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("MEMSET: Testing...\n");
	printf("MEMSET: %s\n", check_memset() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("BZERO: Testing...\n");
	printf("BZERO: %s\n", check_bzero() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("MEMCPY: Testing...\n");
	printf("MEMCPY: %s\n", check_memcpy() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("MEMMOVE: Testing...\n");
	printf("MEMMOVE: %s\n", check_memmove() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRLCPY: Testing...\n");
	printf("STRLCPY: %s\n", check_strlcpy() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRLCAT: Testing...\n");
	printf("STRLCAT: %s\n", check_strlcat() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("TOUPPER: Testing...\n");
	printf("TOUPPER: %s\n", check_toupper() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("TOLOWER: Testing...\n");
	printf("TOLOWER: %s\n", check_memcpy() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRCHR: Testing...\n");
	printf("STRCHR: %s\n", check_strchr() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRRCHR: Testing...\n");
	printf("STRRCHR: %s\n", check_strrchr() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRNCMP: Testing...\n");
	printf("STRNCMP: %s\n", check_strncmp() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("MEMCHR: Testing...\n");
	printf("MEMCHR: %s\n", check_memchr() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("MEMCMP: Testing...\n");
	printf("MEMCMP: %s\n", check_memcmp() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRNSTR: Testing...\n");
	printf("STRNSTR: %s\n", check_strnstr() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("ATOI: Testing...\n");
	printf("ATOI: %s\n", check_atoi() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("CALLOC: Testing...\n");
	printf("CALLOC: %s\n", check_calloc() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRDUP: Testing...\n");
	printf("STRDUP: %s\n", check_strdup() ? "SUCCESS" : "FAIL");

	printf("\n");
	printf("--------PART2--------\n");

	printf("\n");
	printf("SUBSTR: Testing...\n");
	printf("SUBSTR: %s\n", check_substr() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRJOIN: Testing...\n");
	printf("STRJOIN: %s\n", check_strjoin() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRTRIM: Testing...\n");
	printf("STRTRIM: %s\n", check_strtrim() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("SPLIT: Testing...\n");
	printf("SPLIT: %s\n", check_split() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("ITOA: Testing...\n");
	printf("ITOA: %s\n", check_itoa() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRMAPI: Testing...\n");
	printf("STRMAPI: %s\n", check_strmapi() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("STRITERI: Testing...\n");
	printf("STRITERI: %s\n", check_striteri() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("PUTCHAR_FD: Testing...\n");
	check_putchar_fd();
	printf("\n");
	printf("PUTSTR_FD: Testing...\n");
	check_putstr_fd();
	printf("\n");
	printf("PUTENDL_FD: Testing...\n");
	check_putendl_fd();
	printf("\n");
	printf("PUTNBR_FD: Testing...\n");
	check_putnbr_fd();

	printf("\n");
	printf("--------BONUS--------\n");
	printf("\n");
	printf("LSTNEW: Testing...\n");
	check_lstnew();
	printf("\n");
	printf("LSTADD_FRONT: Testing...\n");
	check_lstadd_front();
	printf("\n");
	printf("LSTSIZE: Testing...\n");
	printf("LSTSIZE: %s\n", check_lstsize() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("LSTLAST: Testing...\n");
	printf("LSTLAST: %s\n", check_lstlast() ? "SUCCESS" : "FAIL");
	printf("\n");
	printf("LSTADD_BACK: Testing...\n");
	check_lstadd_back();
//	printf("\n");
//	printf("LSTDELONE: Testing...\n");
//	check_lstdelone();
//	printf("\n");
//	printf("LSTCLEAR: Testing...\n");
//	check_lstclear();
	printf("\n");
	printf("LSTITER: Testing...\n");
	check_lstiter();
	printf("\n");
	printf("LSTMAP: Testing...\n");
	check_lstmap();

	printf("\n");
	printf("---------------------\n");
	return 0;
}
