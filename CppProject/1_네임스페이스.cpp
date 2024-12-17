//
//  1_네임스페이스.cpp
//  CppProject
//
//  Created by 오나현 on 12/17/24.
//

#include <iostream>

/*
/// namespace의 기본 구조

//namespace 이름
//{
//	// 변수, 함수 등..
//}

// --------------------------------------------------

/// 이해를 위한 예제
/// A팀과 B팀이 만든 함수의 이름이 중복되어 에러가 발생하는 상황

/// <summary>
/// A팀이 만든 함수
/// </summary>
void nameChange()
{
	std::cout << "A팀의 함수 호출" << std::endl;
}

void nameChange2()
{
	nameChange();
	nameChange();
}

/// <summary>
/// B팀이 만든 함수
/// </summary>
void nameChange()
{
	std::cout << "B팀의 함수 호출" << std::endl;
}

int main()
{
	nameChange();

	return 0;
}

// --------------------------------------------------

/// 위 상황에 대한 해결 방안

/// <summary>
/// A팀이 만든 함수
/// </summary>
namespace A
{
	void nameChange()
	{
		std::cout << "A팀의 함수 호출" << std::endl;
	}

	void nameChange2()
	{
		nameChange();
		nameChange();
	}
}

/// <summary>
/// B팀이 만든 함수
/// </summary>
namespace B
{
	void nameChange()
	{
		std::cout << "B팀의 함수 호출" << std::endl;
	}
}

int main()
{
	A::nameChange();
	B::nameChange();
	A::nameChange2();

	return 0;
}

// --------------------------------------------------

/// Using

using namespace std;	// 'std::' 생략 가능

/// <summary>
/// A팀이 만든 함수
/// </summary>
namespace A
{
	void nameChange()
	{
		// std::cout << "A팀의 함수 호출" << std::endl;
		cout << "A팀의 함수 호출" << endl;
	}

	void nameChange2() {};
	void nameChange3() {};
	void nameChange4() {};
	void nameChange5() {};
}

/// <summary>
/// B팀이 만든 함수
/// </summary>
namespace B
{
	void nameChange()
	{
		// std::cout << "B팀의 함수 호출" << std::endl;
		cout << "B팀의 함수 호출" << endl;
	}
}

using namespace A;	// 'A::' 생략 가능 (점점 많아지는 함수들을 사용할 때, 'A::'을 모두 적어야하는 불편함을 해결하고자 사용한다.)

int main()
{
	nameChange();
	B::nameChange();
	nameChange2();
	nameChange3();
	nameChange4();
	nameChange5();

	return 0;
}

// --------------------------------------------------

/// 사용 제약 가능

using namespace std;

namespace A
{
	void nameChange()
	{
		cout << "A팀의 1번 함수 호출" << endl;
	}

	void nameChange2()
	{
		cout << "A팀의 2번 함수 호출" << endl;
	}

	void nameChange3()
	{
		cout << "A팀의 3번 함수 호출" << endl;
	}
}

using A::nameChange;	// 특정 함수 A::nameChange만 편애

int main()
{
	nameChange();
	A::nameChange2();
	A::nameChange3();

	return 0;
}
*/
