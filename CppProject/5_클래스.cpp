//
//  5_클래스.cpp
//  CppProject
//
//  Created by 오나현 on 12/18/24.
//

/*
/// 클래스 (Class)

/// C 언어에서는 구조체, 포인터
/// C++ 언어에서는 클래스

/// 객체 지향 프로그래밍 (OOP:Object Oriented Programing)
/// : 실세계의 사물을 추상화(Abstraction)하고,
///   캡슐화(Encapsulation) 하며,
///   계층 구조는 상속(Inheritance)을 시키며,
///   부모와 다른 자식의 특성, 행위는 다형성(Polymophism)으로 구현한다.
/// > 유지보수를 편하게 할 수 있다.

/// 객체(Object) : 물건, 물체
/// 인스턴스(Instance) : 객체의 또다른 표현
/// (예) 클래스를 붕어빵틀(도면)이라고 한다면, 인스턴스는 붕어빵이다.

/// 조금 다른 말이긴 하지만.. C 언어에서 봤던 Struct ==> C++ 언어의 Class 라고 해도 무방하다. (100% 옳은 표현은 아님.)

// --------------------------------------------------

/// 클래스의 원형
//class 클래스명
//{
//	// 멤버 변수(상태:State), 멤버 함수(행동:Behavior) 등
//};

#include <iostream>

using namespace std;

class Student // 클래스는 주로 헤더파일로 들어간다.
{
private:
    const char* name;
    int id;
    int age;
    const char* phoneNumber;

public:
    void SetInfo(const char* _name, int _id, int _age, const char* _phoneNumber);
    void GetShow();
    void SetId(int _id);
    void SetAge(int _age);
};

int main()
{
    Student s;

    s.SetInfo("홍길동", 123456789, 20, "010-1234-5678");
    s.GetShow();

    s.SetId(987654321);
    s.GetShow();

    return 0;
}

// 아래 함수들은 주로 Cpp 파일로 들어간다.
void Student::SetInfo(const char* _name, int _id, int _age, const char* _phoneNumber)
{
    name = _name;
    id = _id;
    age = _age;
    phoneNumber = _phoneNumber;
}

void Student::GetShow()
{
    cout << "이름 : " << name;
    cout << ", 학번 : " << id;
    cout << ", 나이 : " << age;
    cout << ", 전화번호 : " << phoneNumber << endl;
}

void Student::SetId(int _id)
{
    id = _id;
}

void Student::SetAge(int _age)
{
    age = _age;
}
*/
