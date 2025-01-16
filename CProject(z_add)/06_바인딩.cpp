//
//  06_바인딩.cpp
//  CppProject
//
//  Created by 오나현 on 01/16/25.
//

/*
/// 바인딩
/// [사전적 의미] 프로그래밍에서 값들이 확정되어 변경할 수 없는 구속(Bind) 상태가 되는 것

/// 정적 바인딩 : 컴파일 시 이미 정해진 주소를 가진다.
/// 동적 바인딩 : 컴파일 시 함수를 호출할 때 결정이 된다.

/// 실행 이전에 값이 확정되면 정적 바인딩 (static binding)	// int num = 10; >> 일반 함수, 일반 변수 할당
/// 실행 이후에 값이 확정되면 동적 바인딩 (dynamic binding) //				 >> 가상 함수, 변수를 동적으로 할당

// --------------------------------------------------

/// 정적 바인딩 예시

#include <iostream>

using namespace std;

class Parents
{
public:
	void func()
	{
		cout << "Parents func()" << endl;
	}
};

class Child: public Parents	// public으로 Parents를 상속받은 Child 클래스
{
public:
	void func()
	{
		cout << "Child func()" << endl;
	}
};

int main()
{
	Parents p1;	// 선언	// 정적 바인딩
	p1.func();

	Parents p2;	// 선언	// 정적 바인딩
	p2.func();

	return 0;
}

/// 위 예시 결과
//Parents func()
//Parents func()

// --------------------------------------------------

/// 동적 바인딩 예시
/// virtual을 붙일 경우, 자식 클래스에 같은 함수가 있으면 자식 클래스를 호출한다.

#include <iostream>

using namespace std;

class Parents
{
public:
	virtual void func()
	{
		cout << "Parents func()" << endl;
	}
};

class Child : public Parents	// public으로 Parents를 상속받은 Child 클래스
{
public:
	void func()
	{
		cout << "Child func()" << endl;
	}
};

int main()
{
	Parents* p1 = new Parents;	// 동적 바인딩
	p1->func();

	Parents* p2 = new Child;	// 동적 바인딩
	p2->func();

	// ((바인딩된 것은 삭제 작업이 가장 중요하다!))
	delete p1;
	delete p2;

	return 0;
}

/// 위 예시 결과
//Parents func()
//Child func()
*/
