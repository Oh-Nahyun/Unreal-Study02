//
//  04_반올림_버림.cpp
//  CppProject
//
//  Created by 오나현 on 01/15/25.
//

/*
///// C++ round 반올림 함수 원형과 설명

/// round 함수
/// 헤더파일 : <cmath>

/// 함수 원형
double round(double num);
float round(float num);
long double round(long double num);
double round(T x);	// T : 템플릿형

/// round 함수는 반올림을 하는 함수이다.
/// 인자로 들어온 값을 반올림해서 반환하는 함수이다.

// --------------------------------------------------

/// 간단한 round 함수 예시
round(3.2) -> 3 반환
round(3.7) -> 4 반환

round(-3.2) -> -3 반환
round(-3.7) -> -4 반환

// --------------------------------------------------

/// round 예시
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a1 = 3.2;
	double a2 = 3.7;
	double a3 = -3.2;
	double a4 = -3.7;

	cout << round(a1) << endl;		//  3
	cout << round(a2) << endl;		//  4
	cout << round(a3) << endl;		// -3
	cout << round(a4) << endl;		// -4

	return 0;
}

// --------------------------------------------------

///// C++ trunc 버림 함수 원형과 설명

/// trunc 함수
/// 헤더파일 : <cmath>

/// 함수 원형
double trunc(double num);
float trunc(float num);
long double trunc(long double num);
double trunc(T x);	// T : 템플릿형

/// trunc 함수는 소수점 아래수는 0으로 만들어 버리는 함수이다.

// --------------------------------------------------

/// 간단한 trunc 함수 예시
trunc(3.2) -> 3 반환
trunc(3.7) -> 3 반환

trunc(-3.2) -> -3 반환
trunc(-3.7) -> -3 반환

// --------------------------------------------------

/// trunc 예시
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a1 = 3.2;
	double a2 = 3.7;
	double a3 = -3.2;
	double a4 = -3.7;

	cout << trunc(a1) << endl;		//  3
	cout << trunc(a2) << endl;		//  3
	cout << trunc(a3) << endl;		// -3
	cout << trunc(a4) << endl;		// -3

	return 0;
}

// --------------------------------------------------

///// C++ floor 내림 함수 원형과 설명

/// floor 예시
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a1 = 3.2;
	double a2 = 3.7;
	double a3 = -3.2;
	double a4 = -3.7;

	cout << floor(a1) << endl;		//  3
	cout << floor(a2) << endl;		//  3
	cout << floor(a3) << endl;		// -4
	cout << floor(a4) << endl;		// -4

	return 0;
}

// --------------------------------------------------

///// C++ ceil 올림 함수 원형과 설명

/// ceil 예시
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a1 = 3.2;
	double a2 = 3.7;
	double a3 = -3.2;
	double a4 = -3.7;

	cout << ceil(a1) << endl;		//  4
	cout << ceil(a2) << endl;		//  4
	cout << ceil(a3) << endl;		// -3
	cout << ceil(a4) << endl;		// -3

	return 0;
}
*/
