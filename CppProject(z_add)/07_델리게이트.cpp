//
//  07_델리게이트.cpp
//  CppProject
//
//  Created by 오나현 on 01/16/25.
//

/*
/// 델리게이트 (delegate)
/// 컴퓨터 프로그래밍에서 델리게이트 : 함수를 안전하게 호출할 수 있는 기능
/// C++ 언어에서는 개념이 사실 존재하지 않는다.
/// C# : 언어 패턴 (발행/구독) -> (구독 의사) -> (발행될 때마다 배달된다.) (예 : 신문)

/// C++ 객체에서만 사용할 수 있는 델리게이트

// --------------------------------------------------

/// C# 델리게이트
namespace Test
{
	delegate int CalcDelegate(int x, int y);

	class delegate2
	{
		static int Add(int x, int y) { return x + y };
		static int Sub(int x, int y) { return x - y };

		public static void Calc(int x, int y, CalcDelegate c)
		{
			Console.WriteLine(c(x, y));
		}

		static void Main(string[] args)
		{
			CalcDelegate Plus = new CalcDelegate(Add);
			CalcDelegate Minus = Sub;
			Calc(3, 4, Plus);
			Calc(3, 4, Minus);
		}
	};
}

// --------------------------------------------------

/// C++ 델리게이트 예시
/// delegate 와 delegator 로 구성
/// delegator로 지시할 수 있다.

#include <iostream>

using namespace std;

class Car
{
public:
	virtual void Info() = 0; // 순수 클래스 (퓨어 클래스)
};

// delegate (대리인)
class carOne : public Car
{
public:
	void Info()
	{
		cout << "carOne Info()" << endl;
	}
};

// delegate (대리인)
class carTwo : public Car
{
public:
	void Info()
	{
		cout << "carTwo Info()" << endl;
	}
};

// delegator (지시자)
class Delegator : public Car
{
private:
	Car* m_instance;
public:
	Delegator()
	{
		m_instance = new carOne();
	}

	void Info()
	{
		m_instance->Info();
	}

	void call_1()
	{
		if (m_instance)
		{
			delete m_instance;
		}
		m_instance = new carTwo();
	}

	void call_2()
	{
		if (m_instance)
		{
			delete m_instance;
		}
		m_instance = new carOne();
	}
};

int main()
{
	Delegator* delegator = new Delegator();
	delegator->Info();

	delegator->call_1();
	delegator->Info();

	delegator->call_2();
	delegator->Info();

	return 0;
}
*/
