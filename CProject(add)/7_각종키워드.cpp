//
//  7_각종키워드.cpp
//  CProject
//
//  Created by 오나현 on 12/16/24.
//

#include <stdio.h>

/*
/// typedef

/// 형식
/// typedef (이름을 새로 부여하고자 하는 타입) (새로 준 타입의 이름)
/// (ex) struct HUMAN --> HUMAN

int add(int a, int b)
{
	return a + b;
}

// 더욱 간편하게 사용하기 위해 자료형의 타입을 정의
typedef int CAL_TYPE;
typedef int (*Padd)(int, int);
typedef int Arrays[10];

int main()
{
	CAL_TYPE a = 10;
	Arrays arr = { 1,2,3,4,5,6,7,8,9,0 };
	Padd ptr = add;
	// INT32, INT8, __int64

	printf("a : %d\n", a);
	printf("arr[3] : %d\n", arr[3]);
	printf("add(3,5) : %d\n", ptr(3,5));

	return 0;
}

// --------------------------------------------------

/// #pragma

/// #pragma pack
//#pragma pack(1)	// 1바이트 단위로 정렬하라는 의미
//#pragma pack(4)	// 4바이트 단위로 정렬하라는 의미 (기본)

#pragma pack(1)		// 속도는 느려지지만 메모리를 아낄 수 있다.

struct Weird
{
	char arr[2];
	int i;
}; // 6바이트

int main()
{
	struct Weird a;

	//a.i = 3;
	printf("size of a : %d\n", sizeof(a)); // #pragma pack(1)를 사용하기 전 크기 : 8바이트 (이유 : 2의 배수가 가장 속도가 빠르다.)

	return 0;
}

/// #pragma once
*/
