#define _CRT_SECURE_NO_WARNINGS 1
#include "word.h"
int main(void)
{
	char str[LEN1 + 1];
	char Str[LEN2 + 1];
	scanf(" %s", str);
	scanf(" %[^\n]", Str);
	FindWord(str, Str);
	return 0;
}