//
//  7_참조자.cpp
//  CppProject
//
//  Created by 오나현 on 12/18/24.
//

/// 참조자 (Reference)

#include <iostream>

using namespace std;

/*
int main()
{
	int a = 50;
	int& aa = a;	// a의 별명 (aka) : a와 aa를 같은 것으로 취급하겠다는 의미

	return 0;
}

// --------------------------------------------------

int main()
{
	int num1 = 50;
	int& num2 = num1;	// num1을 참조하는 num2
						// num1과 같은 메모리 공간 주소를 사용한다.

	// 같은 내용 출력
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	// 같은 주소 출력 (헥사 코드로 나옴.)
	cout << "num1 : " << &num1 << endl;
	cout << "num2 : " << &num2 << endl;

	return 0;
}

// --------------------------------------------------

int main()
{
	int num1 = 50;
	int& num2 = num1;
	int& num3 = num1;
	int& num4 = num3;

	// 같은 주소 출력
	cout << "num1 : " << &num1 << endl;
	cout << "num2 : " << &num2 << endl;
	cout << "num3 : " << &num3 << endl;
	cout << "num4 : " << &num4 << endl;

	return 0;
}

// --------------------------------------------------

/// 참조를 이용한 Call by Reference

/// 기본 참조 예제1

void Swap(int ref1, int ref2) // Call by Value
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << num1 << endl;
	cout << num2 << endl << endl;

	Swap(num1, num2);

	cout << num1 << endl;
	cout << num2 << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 기본 참조 예제1 (수정)

void Swap(int &ref1, int &ref2) // Call by Reference로 변경된다.
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << num1 << endl;
	cout << num2 << endl << endl;

	Swap(num1, num2);			// num1과 ref1은 같은 주소를 공유한다.

	cout << num1 << endl;
	cout << num2 << endl << endl;

	return 0;
}
*/
