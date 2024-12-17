//
//  5_전처리기_선행처리문.cpp
//  CProject
//
//  Created by 오나현 on 12/13/24.
//

#include <stdio.h>

/*
/// 전처리 구문 (# 친구들)
/// 가장 먼저 처리되는 구문을 의미한다.
/// #include
/// #define
/// #ifdef DEBUG
/// #endif (DEBUG)
/// #else
/// #pragma

// --------------------------------------------------

#include <stdio.h>

// const float PI = 3.14f;	// 사람이 보기에 확실한 이름 지정이 필요하다.
#define PI 3.14
#define VAR 10
#define ONE 1
#define TWO 2				// ;은 찍지 않는다. // 속도가 빠르다.

// --------------------------------------------------

#define VAR 10

// 프로그래머
int main()
{
	char arr[VAR] = "hi";
	printf("%s\n", arr);

	return 0;
}

// 컴파일러
int main()
{
	char arr[10] = "hi";
	printf("%s\n", arr);

	return 0;
}

// --------------------------------------------------

// #ifdef, endif
// 버전 관리

//A = PC
//B = MOBILE
//
//ANDROID
//APPLE(IOS)
//UNIX

#define A	// 혹은 B
#define PC	// 혹은 MOBILE
#define KOR // JPN, EN, CHI 등

int main()
{
#ifdef A
	printf("AAAA\n");
#endif // A

#ifdef B
	printf("BBBBB\n");
#endif // B

#ifdef PC
	printf("PC\n"); // PC
#else
	printf("ALL\n");
#endif

#ifdef MOBILE
	printf("MOBILE\n");
#endif // MOBILE

	return 0;
}
*/

// --------------------------------------------------

//#pragma once // 한번만 돌라는 의미
