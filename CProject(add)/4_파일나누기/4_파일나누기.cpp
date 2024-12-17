//
//  4_파일나누기.cpp
//  CProject
//
//  Created by 오나현 on 12/13/24.
//

#include <stdio.h>
#include "4_파일나누기.h"	// 헤더 파일 안에 이미 #include <stdio.h>가 포함되어있기 때문에 #include <stdio.h>는 없어도 상관없다.
#include "4_파일나누기2.h"
//#include "4_파일나누기2.cpp"도 파일 나누기가 가능하지만 추천하진 않는다.

/*
/// C 언어 : 헤더파일 (파일네임.h) 소스파일 (파일네임.c)
/// C++ 언어 :  헤더파일 (파일네임.hpp) 소스파일 (파일네임.cpp)
///				헤더파일 (파일네임.h) 소스파일 (파일네임.cpp)
///				헤더파일 (파일네임) 소스파일 (파일네임.cpp)

// --------------------------------------------------

/// 문장 비교 함수
char compare(char* str1, char* str2);

int main()
{
	char str1[20];
	char str2[20];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	if (compare(str1, str2))
	{
		printf("%s 와 %s 는 같은 문장 입니다.\n", str1, str2);
	}
	else
	{
		printf("%s 와 %s 는 다른 문장 입니다.\n", str1, str2);
	}

	return 0;
}

/// 같은 문장이면 1(True)을 반환, 다르면 0(False)을 반환
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
		return 1; // 끝이 같은 문장이다.

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
		printf("%s 와 %s 는 같은 문장 입니다.\n", str1, str2);
	}
	else
	{
		printf("%s 와 %s 는 다른 문장 입니다.\n", str1, str2);
	}

	return 0;
}

char compare(char* str1, char* str2) // "4_파일나누기2.h"의 compare() 함수
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
		return 1; // 끝이 같은 문장이다.

	return 0;
}
