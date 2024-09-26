#pragma once
#include<iostream>
#include<iomanip>

using namespace std;


int lenStr(char* str)
{
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return count;
}

char* ChangeChar(const char* str, char FirstChar, char SecondChar) {

	int i = 0;
	char* newStr = new char[strlen(str) + 1];

	while (str[i] != '\0') {

		if (str[i] == FirstChar) {
			newStr[i] = SecondChar;
		}
		else
		{
			newStr[i] = str[i];
		}
		i++;
	}
	newStr[i] = '\0';

	return newStr;
}


int countWords(const char* str)
{
	return 0;
}

char* mystrstr(char* str1, char* str2)
{
	for (size_t i = 0; i < strlen(str1); i++)
	{
		bool flag = true;
		for (size_t j = 0; j < strlen(str2); j++)
		{
			if (str1[i] == str2[j])
			{
				i++;
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
			return &str1[i - strlen(str2)];
	}
	return nullptr;
}

char* strReverse(const char* str)
{
	int length = strlen(str);
	char* newStr = new char[length + 1];

	for (int i = 0; i < length; i++) 
	{
		newStr[i] = str[length - 1 - i];
	}
	newStr[length] = '\0';

	return newStr;
}


char* reverseWord(const char* str)
{
	int p = 0;
	while (str[p] != ' ')
		p++;

	int len = strlen(str);

	char* t = new char[len + 1];
	int c = 0;
	for (size_t i = p+1; i < len; i++)
	{
		t[c++] = str[i];
	}
	t[c++] = ' ';
	for (size_t i = 0; i < p; i++)
	{
		t[c++] = str[i];
	}
	t[c] = '\0';
	return t;
}


char* delStr(const char* str, const char* substr)
{
	const char* p = strstr(str, substr);
	int lenSubstr = strlen(substr);
	int count = 0;
	while (p != nullptr)
	{
		count++;
		p += lenSubstr;
		p = strstr(p, substr);
	}

	char* t = new char[strlen(str) - count * lenSubstr + 1];
	t[0] = '\0';
	p = strstr(str, substr);
	while (p != nullptr)
	{
		strncat(t, str, p - str);
		p += lenSubstr;
		str = p;
		p = strstr(p, substr);
	}

	strcat(t, str);

	return t;

}

char* replaceStr(const char* str, const char* oldstr, const char* newstr)
{
	const char* p = strstr(str, oldstr);
	int lenOld = strlen(oldstr);
	int lenNew = strlen(newstr);
	int count = 0;
	while (p != nullptr)
	{
		count++;
		p += lenOld;
		p = strstr(p, oldstr);
	}

	char* t = new char[strlen(str) - count * (lenOld - lenNew) + 1];
	t[0] = '\0';

	p = strstr(str, oldstr);
	while (p != nullptr)
	{
		strncat(t, str, p - str);
		strcat(t, newstr);
		p += lenOld;
		str = p;
		p = strstr(p, oldstr);
	}
	strcat(t, str);
	return t;
}


//345+234

int calc(const char* str)
{
	char oper[] = "+-";
	for (size_t i = 0; i < strlen(oper); i++)
	{
		const char* p = strchr(str, oper[i]);
		if (p != nullptr)
		{
			char buffA[10]="", buffB[10]="";
			strncat(buffA, str, p - str);
			strcat(buffB, p + 1);
			int a = atoi(buffA);
			int b = atoi(buffB);
			if (*p == '+')
			{
				return a + b;
			}
		}
	}
	return 0;
}