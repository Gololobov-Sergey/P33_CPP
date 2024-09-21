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