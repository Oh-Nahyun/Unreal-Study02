//
//  4_���ϳ�����.cpp
//  CProject
//
//  Created by ������ on 12/13/24.
//

#include <stdio.h>
#include "4_���ϳ�����.h"	// ��� ���� �ȿ� �̹� #include <stdio.h>�� ���ԵǾ��ֱ� ������ #include <stdio.h>�� ��� �������.
#include "4_���ϳ�����2.h"
//#include "4_���ϳ�����2.cpp"�� ���� �����Ⱑ ���������� ��õ���� �ʴ´�.

/*
/// C ��� : ������� (���ϳ���.h) �ҽ����� (���ϳ���.c)
/// C++ ��� :  ������� (���ϳ���.hpp) �ҽ����� (���ϳ���.cpp)
///				������� (���ϳ���.h) �ҽ����� (���ϳ���.cpp)
///				������� (���ϳ���) �ҽ����� (���ϳ���.cpp)

// --------------------------------------------------

/// ���� �� �Լ�
char compare(char* str1, char* str2);

int main()
{
	char str1[20];
	char str2[20];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	if (compare(str1, str2))
	{
		printf("%s �� %s �� ���� ���� �Դϴ�.\n", str1, str2);
	}
	else
	{
		printf("%s �� %s �� �ٸ� ���� �Դϴ�.\n", str1, str2);
	}

	return 0;
}

/// ���� �����̸� 1(True)�� ��ȯ, �ٸ��� 0(False)�� ��ȯ
char compare(char* str1, char* str2)
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0')
		return 1; // ���� ���� �����̴�.

	return 0;
}
*/

// --------------------------------------------------

int main()
{
	char str1[20];
	char str2[20];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	if (compare(str1, str2))
	{
		printf("%s �� %s �� ���� ���� �Դϴ�.\n", str1, str2);
	}
	else
	{
		printf("%s �� %s �� �ٸ� ���� �Դϴ�.\n", str1, str2);
	}

	return 0;
}

char compare(char* str1, char* str2) // "4_���ϳ�����2.h"�� compare() �Լ�
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0')
		return 1; // ���� ���� �����̴�.

	return 0;
}
