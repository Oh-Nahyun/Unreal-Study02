//
//  2_함수오버로딩.cpp
//  CppProject
//
//  Created by 오나현 on 12/17/24.
//

// CProject_Study13(함수).cpp 파일 참고

#include <iostream>

/*
/// 함수 오버로딩 (Function Overloading)
/// : 함수명은 같으며 인자의 자료형이나 수가 다른 함수의 선언
/// C에서는 허용하지 않음. C++에서는 가능.

// --------------------------------------------------

/// 함수 오버로딩의 조건
/// 1. 함수명이 같아야 한다.
/// 2. 매개변수가 다르거나, 아니면 매개변수의 수가 같고 자료형이 달라야 한다.
/// 3. 위의 조건이 만족하면 반환형의 차이는 상관없다.

// --------------------------------------------------

/// 이해를 위한 예제
/// 매개변수에 따라서 호출되는 함수가 다르다.

using namespace std;

int add(int a, int b) { return a + b; }				// add(3, 4);
int add(double a, double b) { return a + b; }		// add(3.1f, 4.1f);
float add(float a, float b) { return a + b; }		// add(3.4f, 4.4f);
int add(int a, int b, int c) { return a + b + c; }	// add(3, 4, 5);

void func(int a)
{
	cout << "void func(int a)가 호출됐다." << endl;
}

void func(int a, int b)
{
	cout << "void func(int a, int b)가 호출됐다." << endl;
}

int main()
{
	// 인텔리센스 자동 기능으로 편하게 사용 가능
	add(1.0, 2.0);	// (4가지 오버로드)
	func(3);		// (2가지 오버로드)
	func(5, 7);

	return 0;
}
*/
