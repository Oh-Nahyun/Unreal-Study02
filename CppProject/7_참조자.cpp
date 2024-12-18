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
*/

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
