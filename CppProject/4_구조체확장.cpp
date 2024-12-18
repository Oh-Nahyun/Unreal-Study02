//
//  4_구조체확장.cpp
//  CppProject
//
//  Created by 오나현 on 12/17/24.
//

// CProject_Study15(구조체).cpp 파일 참고

/*
/// 구조제 (CProject)

#include <stdio.h>

typedef struct Student
{
    char name[15];
    int id;
    int age;
    char phoneNumber[14];
}StudentData; // struct Student == StudentData

int main()
{
    StudentData Human = { "홍길동", 123456789, 20, "010-1234-5678" };
    StudentData Human2 = { "홍길동2", 123456789, 22, "010-1234-5678" };

    printf("이름 : %s, 학번 : %d, 나이 : %d, 전화번호 : %s\n",
        Human.name, Human.id, Human.age, Human.phoneNumber);
    printf("이름 : %s, 학번 : %d, 나이 : %d, 전화번호 : %s\n",
        Human2.name, Human2.id, Human2.age, Human2.phoneNumber);

    return 0;
}

// --------------------------------------------------

/// C++의 구조체
/// 위 예제(C)를 C++로 변경하기

#include <iostream>

using namespace std;

struct Student
{
    char name[15];
    int id;
    int age;
    char phoneNumber[14];

    void Show() // 함수 추가 가능
    {
        cout << "이름 : " << name;
        cout << ", 학번 : " << id;
        cout << ", 나이 : " << age;
        cout << ", 전화번호 : " << phoneNumber << endl;
    }
};  // 구조체 뒤에 세미클론(;)을 붙여야 한다.

int main()
{
    Student Human = { "홍길동", 123456789, 20, "010-1234-5678" };
    Student Human2 = { "홍길동2", 123456789, 22, "010-1234-5678" };

    Human.Show();
    Human2.Show();

    return 0;
}

// --------------------------------------------------

/// 접근 제어 지시자
/// public : 어디서든 접근이 가능하다.
/// private : 외부에서 접근이 불가능합니다.
/// protected : 외부에서는 접근이 불가능하나, 상속된 파생 객체(클래스)에서는 접근이 허용된다.

/// (캡슐화)
/// 객체를 보호하기 위해 사용된다.

#include <iostream>

using namespace std;

struct Student
{
private:
    const char* name;
    int id;
    int age;
    const char* phoneNumber;

public: // set() --> save, get() --> load : 형태로 시작되는 함수를 주로 public으로 사용한다.
    void SetInfo(const char* _name, int _id, int _age, const char* _phoneNumber)
    {
        name = _name;
        id = _id;
        age = _age;
        phoneNumber = _phoneNumber;
    }

    void GetShow()
    {
        cout << "이름 : " << name;
        cout << ", 학번 : " << id;
        cout << ", 나이 : " << age;
        cout << ", 전화번호 : " << phoneNumber << endl;
    }

    void SetId(int _id)
    {
        id = _id;
    }

    void SetAge(int _age)
    {
        age = _age;
    }
};

int main()
{
    Student s;

    s.SetInfo("홍길동", 123456789, 20, "010-1234-5678");
    s.GetShow();

    s.SetId(987654321); // s.id = 987654321;의 형태는 private이기 때문에 사용이 불가능하다.
    s.GetShow();

    return 0;
}
*/
