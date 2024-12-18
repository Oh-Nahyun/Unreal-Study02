//
//  6_생성자_소멸자.cpp
//  CppProject
//
//  Created by 오나현 on 12/18/24.
//

/// 생성자 (Constructor)
/// : 객체 생성과 동시에 초기화 시켜주는 것

/*
class 클래스명
{
public:
	클래스명(매개변수..) // <-- 생성자
	{
		// 생성과 동시에 구동된다. (예: 초기화)
	}
	// ...
};
*/

/*
#include <iostream>

using namespace std;

class Student
{
private:
    const char* name;
    int id;
    int age;
    const char* phoneNumber;

public:
    Student();  // <-- 생성자 : 인스턴스화 되는 순간 실행된다. 가장 먼저 실행된다.
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

Student::Student()
{
    cout << "[ Student::Student() Called ]" << endl;
}
*/

// --------------------------------------------------

/// 소멸자 (Destructor)
/// 소멸자는 객체 소멸 시에 호출된다.
/// (메모리를 생성하고 free 또는 delete 시키는 것과 같음..?)

/*
class 클래스명
{
public:
    ~클래스명(매개변수..) // <-- 소멸자 ([~] Key : '틸드'라고 부름.)
    {
        // 소멸 시에 구동된다.
    }
    // ...
};
*/

/*
#include <iostream>

using namespace std;

class Student
{
private:
    const char* name;
    int id;
    int age;
    const char* phoneNumber;

public:
    Student();  // <-- 생성자
    ~Student(); // <-- 소멸자
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

Student::Student()
{
    cout << "[ Student::Student() Called ]" << endl;
}

Student::~Student()
{
    cout << "[ Student::~Student() Called ]" << endl;
}
*/

// --------------------------------------------------

/// 생성 시 함수 오버로딩

/*
#include <iostream>

using namespace std;

class Student
{
private:
    const char* name;
    int id;
    int age;
    const char* phoneNumber;

public:
    Student();  // <-- 생성자
    Student(const char* _name, int _id, int _age, const char* _phoneNumber);    // 생성자 오버로딩

    ~Student(); // <-- 소멸자
    void SetInfo(const char* _name, int _id, int _age, const char* _phoneNumber);
    void GetShow();
    void SetId(int _id);
    void SetAge(int _age);
};

int main()
{
    //Student s;    // Student::Student()이 사용된다.
    //s.SetInfo("홍길동", 123456789, 20, "010-1234-5678");

    Student s("홍길동", 123456789, 20, "010-1234-5678");   // Student::Student(const char* _name, int _id, int _age, const char* _phoneNumber)이 사용된다.
    s.GetShow();

    s.SetId(987654321);
    s.GetShow();

    return 0;
}

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

Student::Student()  // 그냥 생성자
{
    cout << "[ Student::Student() Called ]" << endl;
}

Student::Student(const char* _name, int _id, int _age, const char* _phoneNumber)    // 생성자 + 초기화
{
    name = _name;
    id = _id;
    age = _age;
    phoneNumber = _phoneNumber;

    cout << "[ Student::Student(const char* _name, int _id, int _age, const char* _phoneNumber) Called ]" << endl;
}

Student::~Student()
{
    cout << "[ Student::~Student() Called ]" << endl;
}
*/

// --------------------------------------------------

/// CppProject_7_참조자.cpp 파일 참고

/// 복사 생성자


