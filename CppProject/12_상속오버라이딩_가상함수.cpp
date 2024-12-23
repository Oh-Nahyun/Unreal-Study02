//
//  12_상속오버라이딩_가상함수.cpp
//  CppProject
//
//  Created by 오나현 on 12/23/24.
//

/*
/// 상속 오버라이딩 (Ingeritance Overriding) - 재정의, 덮어쓰기

// 부모 클래스에서 이미 정의된 함수를 같은 이름으로 자식 클래스에서 재정의 하는 것을 말한다.
// (중요 조건 : 부모의 멤버 함수와 원형이 완전히 같아야 한다.)

#include <iostream>

using namespace std;

class A
{
public:
	void over()
	{
		cout << "A 클래스의 over 함수 호출" << endl;
	}
};

class B : public A
{
public:
	void over()
	{
		A::over(); // A 클래스의 over 함수를 포함시켜주고.. // 부모 클래스 함수 호출
		cout << "B 클래스의 over 함수 호출" << endl;
	}
};

int main()
{
	B b;
	b.over();

	return 0;
}

// --------------------------------------------------

/// 가상 함수 (Virtual Function)

/// 포인터 변수 문제 예시

#include <iostream>

using namespace std;

class Parent
{
public:
	void func()
	{
		cout << "부모 클래스의 func 함수 호출" << endl;
	}
};

class Child : public Parent
{
public:
	void func()
	{
		cout << "자식 클래스의 func 함수 호출" << endl;
	}
};

int main()
{
	Parent P, * pP;	// 포인터의 자료형이 부모 클래스이기 때문에 아래와 같은 문제 발생
	Child C;

	pP = &P;
	pP->func();		// 부모 출력

	pP = &C;
	pP->func();		// 부모 출력

	return 0;
}

// --------------------------------------------------

/// 포인터 변수 문제 해결 (가상 함수 사용) 예시

#include <iostream>

using namespace std;

class Parent
{
public:
	virtual void func()
	{
		cout << "부모 클래스의 func 함수 호출" << endl;
	}
};

class Child : public Parent
{
public:
	virtual void func()	// 자식 클래스에서는 virtual 생략 가능
	{
		cout << "자식 클래스의 func 함수 호출" << endl;
	}
};

int main()
{
	Parent P, * pP;
	Child C;

	pP = &P;		// 객체(=의 뒷쪽 부분)가 우선시 되어 문제 해결
	pP->func();		// 부모 출력

	pP = &C;
	pP->func();		// 자식 출력

	return 0;
}

// --------------------------------------------------

/// 순수 가상 함수 (Pure Virtual Function)

// 함수의 선언만 되어있고, 정의는 없다.
// 자식 클래스에서 반드시 재정의(오버라이딩) 해야한다.

#include <iostream>

using namespace std;

class Parent
{
public:
	virtual void func() = 0; // 순수 가상 함수

	// [예시] 부모 : 동물
};	// 추상 클래스 (Abstract Class)

class Child : public Parent
{
public:
	// [예시] 자식 : 행동 (호흡기관, 소리 = 여우, 사슴)
	virtual void func()
	{
		cout << "자식 클래스의 func 함수 호출" << endl;
	}
};

int main()
{
	//Parent P;	// 추상 클래스는 선언 불가능
	Parent* pP;

	pP = new Child;	// 만약에 Child 클래스에 func() 함수가 없다면 Error 발생 (반드시 만들어야 한다.)
	pP->func();

	return 0;
}

// --------------------------------------------------

/// 다중 상속 (Multiple Inheritance)
// (한 번 상속은 괜찮지만, 두 번 상속에 대한 것은 문제가 발생한다.)
// (사용은 가능하지만, 추천하지 않는 방법!!!)

#include <iostream>

using namespace std;

class ParentOne
{
public:
	void funcOne()
	{
		cout << "ParentOne 클래스의 funcOne 함수 호출" << endl;
	}
};

class ParentTwo
{
public:
	void funcTwo()
	{
		cout << "ParentTwo 클래스의 funcTwo 함수 호출" << endl;
	}
};

class Child : public ParentOne, public ParentTwo	// 다중 상속 (만약 부모의 부모에 접근하고자 할 때, 어느 부모를 통해 올라갈 것인지에 대한 문제가 발생한다.)
{
public:
	void func()
	{
		funcOne();
		funcTwo();
	}
};

int main()
{
	Child child;

	child.func();

	return 0;
}
*/
