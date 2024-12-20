//
//  10_상속.cpp
//  CppProject
//
//  Created by 오나현 on 12/19/24.
//

/*
/// 상속 (Inheritance)

//class 부모클래스명
//{
//	// ...
//};
//
//class 자식클래스명 : 접근제한자 클래스명
//{
//	// ...
//};

// --------------------------------------------------

#include <iostream>

using namespace std;

class Human
{
private:
	int age;
	char name[10];
	char hobby[20];
public:
	Human(int _age, char* _name, char* _hobby) : age(_age)
	{
		//age = _age;
		strcpy(name, _name);
		strcpy(hobby, _hobby);
	}

	void GetUp() {	cout << "Get Up!" << endl;	}
	void Sleep() { cout << "Sleep!" << endl; }
	void Eat() { cout << "Eat!" << endl; }

	void ShowInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "취미 : " << hobby << endl;
	}
};

class Student : public Human // 클래스 Student은 부모클래스인 Human을 public으로 상속받았다.
{
private:
	char schoolName[30];
public:
	Student(int _age, char* _name, char* _hobby, char* _schoolName) : Human(_age, _name, _hobby)
	{
		//age = _age;
		//strcpy(name, _name);
		//strcpy(hobby, _hobby);
		strcpy(schoolName, _schoolName);
	}

	void SchoolInfo()
	{
		cout << "소속취미 : " << schoolName << endl;
	}
};

int main()
{
	Student stu(20, "김철수", "게임", "대학교");

	stu.SchoolInfo();

	stu.ShowInfo();
	stu.GetUp();
	stu.Eat();
	stu.Sleep();

	//stu.age = 100; // 당연히 변경 불가 (private 선언)

	return 0;
}

// --------------------------------------------------

/// 클래스의 다양한 명칭
// 1. 상위 클래스(예:Human) :  하위 클래스 (예:Student)
// 2. 부모 (Parent) 클래스  :  자식 (Child) 클래스
// 3. 슈퍼 (Super) 클래스   :  서브 (Sub) 클래스
// 4. 기본 (Base) 클래스    :  유도 (Derived) 클래스

// --------------------------------------------------

/// 멤버 초기화 (이니셜라이즈 : Member Initializer)

#include <iostream>

using namespace std;

class memInit
{
private:
	int num1;
	int num2;
public:
	memInit(int num1, int num2) : num1(num1), num2(num2) {} // 초기화 (상속이 아니니 주의할 것!)

	void ShowInfo() { cout << num1 << "," << num2 << endl; }
};

int main()
{
	memInit mi(50, 70);

	mi.ShowInfo();

	return 0;
}

// --------------------------------------------------

/// private, protected, public 상속

/// [1]

#include <iostream>

using namespace std;

class Parent
{
private:
	int num1;
public:
	int num2;
protected:
	int num3;
};

class Child : private Parent {};	// 상속 접근제한자가 private인 경우

int main()
{
	Child ch;

	cout << ch.num1 << endl;	// Error
	cout << ch.num2 << endl;	// Error
	cout << ch.num3 << endl;	// Error

	return 0;
}

// --------------------------------------------------

/// [2]

#include <iostream>

using namespace std;

class Parent
{
private:
	int num1;
public:
	int num2;
protected:
	int num3;
};

class Child : protected Parent {};	// 상속 접근제한자가 protected인 경우

int main()
{
	Child ch;

	cout << ch.num1 << endl;	// Error
	cout << ch.num2 << endl;	// Error
	cout << ch.num3 << endl;	// Error

	return 0;
}

// --------------------------------------------------

/// [3]

#include <iostream>

using namespace std;

class Parent
{
private:
	int num1;
public:
	int num2;
protected:
	int num3;
};

class Child : public Parent {};	// 상속 접근제한자가 public인 경우

int main()
{
	Child ch;

	cout << ch.num1 << endl;	// Error
	cout << ch.num2 << endl;	// Ok
	cout << ch.num3 << endl;	// Error

	return 0;
}
*/
