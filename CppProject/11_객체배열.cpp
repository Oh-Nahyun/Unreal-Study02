//
//  11_객체배열.cpp
//  CppProject
//
//  Created by 오나현 on 12/20/24.
//

/*
/// 객체 배열 (Object Array)

#include <iostream>

using namespace std;

class Student
{
private:
	char name[10];
	int age;
	int StudentID;
public:
	Student() { cout << "생성자 호출" << endl; }
	~Student() { cout << "소멸자 호출" << endl; }

	void SetInfo(char* _name, int _age, int _StudentID)
	{
		strcpy(name, _name);
		age = _age;
		StudentID = _StudentID;
	}

	void GetInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "학번 : " << StudentID << endl;
	}
};

int main()
{
	Student stu[3]; // 3명의 학생 객체 생성

	char name[10];
	int age, StudentID;

	for (int i = 0; i < 3; i++)
	{
		cin >> name >> age >> StudentID;
		stu[i].SetInfo(name, age, StudentID);
	}

	for (int i = 0; i < 3; i++)
	{
		stu[i].GetInfo();
	}

	return 0;
}

// --------------------------------------------------

#include <iostream>

using namespace std;

class Student
{
private:
	char name[10];
	int age;
	int StudentID;
public:
	Student(char* _name, int _age, int _StudentID) : age(_age), StudentID(_StudentID)	// 생성자
	{
		strcpy(name, _name);
	}

	void GetInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "학번 : " << StudentID << endl;
	}
};

int main()
{
	Student stu[3] = { Student("철수", 10, 2024), Student("영희", 15, 2024), Student("길동", 20, 2024) };

	for (int i = 0; i < 3; i++)
	{
		stu[i].GetInfo();
	}

	return 0;
}

// --------------------------------------------------

/// 객체 포인터 배열 (Object Pointer Array)

//클래스명 * 객체명[크기]

#include <iostream>

using namespace std;

class Student
{
private:
	char name[10];
	int age;
	int StudentID;
public:
	Student(char* _name, int _age, int _StudentID) : age(_age), StudentID(_StudentID)	// 생성자
	{
		strcpy(name, _name);
	}

	void GetInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "학번 : " << StudentID << endl;
	}
};

int main()
{
	Student* stu[3];

	char name[10];
	int age, StudentID;

	for (int i = 0; i < 3; i++)
	{
		cin >> name >> age >> StudentID;

		stu[i] = new Student(name, age, StudentID);		// 입력 받은 후 동적 생성	// 주로 사용하게 될 방법
	}

	for (int i = 0; i < 3; i++)
	{
		stu[i]->GetInfo(); // (*stu[i]).GetInfo();와 같은 의미
	}

	delete stu[0];
	delete stu[1];
	delete stu[2];

	return 0;
}

// --------------------------------------------------

/// this 포인터
/// 자기 참조 포인터 (this 포인터)

#include <iostream>

using namespace std;

class MyClass
{
private:
	int num1;
	int num2;
public:
	MyClass(int num1, int num2)
	{
		//num1 = num1;		// private에 선언한 변수인지 생성자 () 속 변수인지 구분할 수 없는 문제 발생
		//num2 = num2;
		this->num1 = num1;	// 이와 같이 해결한다.
		this->num2 = num2;
	}

	//MyClass(int num1, int num2) : num1(num1), num2(num2) {} // 위와 같은 생성자이긴 하다.

	void GetInfo()
	{
		cout << "num1 : " << num1 << endl;
		cout << "num2 : " << num2 << endl;
	}
};

int main()
{
	MyClass mc(10, 20);

	mc.GetInfo();

	return 0;
}
*/
