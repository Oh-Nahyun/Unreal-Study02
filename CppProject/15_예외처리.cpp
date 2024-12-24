//
//  15_예외처리.cpp
//  CppProject
//
//  Created by 오나현 on 12/24/24.
//

/*
/// 예외 처리 (Exception Handling)

// 프로그램 실행 중에 일어나는 비정상적인 상황
// (예) 나눗셈 프로그램에서 입력값을 받는데 0이 들어오는 상황

// --------------------------------------------------

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "두개의 정수를 입력하세요. : ";
	cin >> a >> b;
	cout << a << "를 " << b << "로 나눈 몫 : " << a / b << endl;

	return 0;
}

// --------------------------------------------------

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "두개의 정수를 입력하세요. : ";
	cin >> a >> b;

	if (b == 0) // 나누는 수가 0인 경우
	{
		cout << "나누는 수가 0이 될 수 없습니다." << endl;
	}
	else
	{
		cout << a << "를 " << b << "로 나눈 몫 : " << a / b << endl;
	}

	return 0;
}

// --------------------------------------------------

/// C++ 에서 제공하는 예외처리 메커니즘
/// try ~ catch (시도하다, 잡다), throw (던지다)

//try								// 예외가 발생하는 (혹은 발생할 것 같은) 영역
//{
//	if (예외조건) throw 예외 객체;	// 예외가 발생하면 예외를 던지는 영역
//}
//catch (예외 객체)					// 던져진 예외를 잡는 영역
//{
//	// 예외 처리 영역
//}

// --------------------------------------------------

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "두개의 정수를 입력하세요. : ";
	cin >> a >> b;

	try
	{
		if (b == 0) throw b;

		cout << a << "를 " << b << "로 나눈 몫 : " << a / b << endl;
	}
	catch (int exception)
	{
		cout << "예외 발생, 나누는 수는 " << b << "가 될 수 없습니다." << endl;
	}

	return 0;
}
*/

// --------------------------------------------------

/// 함수 예외 처리 (Function Exception Handling)
