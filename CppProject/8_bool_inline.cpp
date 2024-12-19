//
//  8_bool_inline.cpp
//  CppProject
//
//  Created by 오나현 on 12/19/24.
//

/*
/// 논리 자료형
/// (가독성을 위해 사용한다.)

// 0 : 1 = false : true = 거짓 : 참
// &&, ||, !

//int a = 0, b = 1;
//bool bA = true;		// Normalize : 정규화 (0 ~ 1) 0.01 ~ 1.0	// 0, 1

#include <iostream>

using namespace std;

int main()
{
	cout << true << endl;	// 1
	cout << false << endl;	// 0

	cout << "sizeof true : " << sizeof true << endl;	// 1바이트 (8비트)
	cout << "sizeof false : " << sizeof false << endl;	// 1바이트 (8비트)

	return false;
}

// --------------------------------------------------

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	bool isMax;

	cin >> a >> b;

	if (a > b) isMax = true;	// 1
	else isMax = false;			// 0

	cout << "isMax : " << isMax << endl;

	return false;
}

// --------------------------------------------------

/// 인라인 (Inline)

#include <iostream>

#define PI 3.141592
#define CU(x) ((x)*(x)*(x)) // 복잡하면 복잡해질 수록 힘들지만, 속도가 빠르다.

using namespace std;

int main()
{
	cout << PI << endl;
	cout << CU(7) << endl;	// cout << ((7)*(7)*(7)) << endl;과 같은 의미

	return false;
}

// --------------------------------------------------

/// 인라인(Inline)의 장점
/// 일반 함수보다 속도가 빠르다.
/// 일반 함수는 호출 코드로 넘어갔다가 왔다갔다하지만,
/// 인라인 함수는 통채로 넘어와서 컴파일러가 처리하는 개념이다.
/// 하지만 인라인 함수는 용량이 조금 늘어난다.
/// 매개변수로 int형이 들어오는 경우 소숫점 아래값들이 버려지는 경우도 생긴다.

#include <iostream>

#define PI 3.141592

inline int CU(int x)
{
	return x * x * x;
}

using namespace std;

int main()
{
	cout << PI << endl;
	cout << CU(7) << endl;

	return false;
}
*/
