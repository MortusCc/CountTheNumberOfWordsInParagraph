#include "word.h"
void FindWord(char str[LEN1 + 1], char Str[LEN2 + 1])
{
	int n = 0, p[MAX] = { 0 },x = 0;
	char temp[MAX + 1] = "\0";
	for (int i = 0; Str[i] != '\0'; i++)
	{
		if ((i > 0 && IsSpace(Str, i - 1)) || i == 0)
		{
			for (int j = 0; !IsSpace(Str, i + j); j++)
			{
				temp[j] = Str[i + j];
				temp[j + 1] = '\0';
			}
		}
		else
		{
			continue;
		}
		int count = 0;
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (temp[j] == str[j] || temp[j] == str[j] - ('a' - 'A') || temp[j] == str[j] + ('a' - 'A'))
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count == strlen(str) && strlen(str) == strlen(temp))
		{
			n++;
			p[x] = i;
			x++;
		}
		temp[0] = '\0';
	}
	if (n == 0)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%d %d\n", n, p[0]);
		//printf("%d\n", n);
		//for (int i = 0; Str[i] != '\0'; i++)
		//{
		//	for (int j = 0; j < x; j++)
		//	{
		//		if (i == p[j])
		//		{
		//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);//ºìÉ«
		//			break;
		//		}
		//		else
		//		{
		//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);//°×É«
		//		}
		//	}
		//	printf("%c", Str[i]);
		//}
	}
}
int IsSpace(char Str[LEN2 + 1],int i)
{
	if ((!(Str[i] >= 'a' && Str[i] <= 'z') && !(Str[i] >= 'A' && Str[i] <= 'Z') && Str[i] != '\'') || Str[i] == '\0')
	{
		return 1;
	}
	return 0;
}