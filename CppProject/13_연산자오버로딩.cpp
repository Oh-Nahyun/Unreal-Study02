//
//  13_연산자오버로딩.cpp
//  CppProject
//
//  Created by 오나현 on 12/23/24.
//

/*
/// 연산자 오버로딩 (Operator Overloading)

#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}

	void ShowNumber()
	{
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
};

int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX nb2(5, 2);
	//NUMBOX result = nb1 + nb2;	// 프로그래머의 의도 : 두개를 더해서 하나로 만들고 싶음.	// 당연히 안된다.

	nb1.ShowNumber();
	nb2.ShowNumber();

	return 0;
}

// --------------------------------------------------

/// 합의? 논의? 해결! -> 커스텀으로 만들어서 해결해라.

#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}

	void ShowNumber()
	{
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}

	NUMBOX operator+(NUMBOX& ref)	// 프로그래머의 의도를 위한 operator 수정
	{
		return NUMBOX(num1 + ref.num1, num2 + ref.num2);
	}
};

int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX nb2(5, 2);

	NUMBOX result = nb1 + nb2;	// 아래 주석 코드와 같은 의미
	// NUMBOX result = nb1.operator+(nb2);
	// nb1 + nb2 = nb1.operator+(nb2)

	nb1.ShowNumber();
	nb2.ShowNumber();

	result.ShowNumber();

	return 0;
}

// --------------------------------------------------

/// 피 연산자가 다른 경우

#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}

	void ShowNumber()
	{
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}

	NUMBOX operator+(int num)
	{
		return NUMBOX(num1 + num, num2 + num);
	}
};

int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX result = nb1 + 10;

	nb1.ShowNumber();
	result.ShowNumber();

	return 0;
}

// --------------------------------------------------

#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}

	void ShowNumber()
	{
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}

	NUMBOX operator+(int num)
	{
		return NUMBOX(num1 + num, num2 + num);
	}
};

int main()
{
	NUMBOX nb1(10, 20);

	NUMBOX result = 10 + nb1;	// 불가능 // Error (순서가 원인)
	NUMBOX result = nb1 + 10;	// 가능 -> (규칙, 순서)

	nb1.ShowNumber();
	result.ShowNumber();

	return 0;
}

// --------------------------------------------------

/// 전역 함수 오버로딩

// 멤버 함수를 통한 오버로딩
// 객체.operator+(피연산자)
// 객체 + 피연산자

// 전역 함수를 통한 오버로딩
// operator+(피연산자, 피연산자)
// 피연산자 + 피연산자				// 피연산자 + 피연산자 = operator+(피연산자, 피연산자)

#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}

	void ShowNumber()
	{
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}

	NUMBOX operator+(int num)
	{
		return NUMBOX(num1 + num, num2 + num);
	}

	friend NUMBOX operator+(int num, NUMBOX ref);
};

NUMBOX operator+(int num, NUMBOX ref)
{
	ref.num1 += num;
	ref.num2 += num;

	return ref;
}

int main()
{
	NUMBOX nb1(10, 20);

	//NUMBOX result = 10 + nb1;		// 가능해짐.
	//NUMBOX result = nb1 + 10;		// 가능
	NUMBOX result = 10 + nb1 + 40;	// 성공 -> '라이브러리'라고 부른다.

	nb1.ShowNumber();
	result.ShowNumber();

	return 0;
}

/// 따라서, 객체를 편하게 수정하기 위해 연산자 오버로딩을 사용하는 것이다.

// --------------------------------------------------

/// 단항 연산자 오버로딩

#include <iostream>

using namespace std;

class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX() {}	// 기본 생성자 (초기화 X)
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) {}

	void ShowNumber()
	{
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}

	NUMBOX operator++()	// 전위 증가
	{
		num1 += 1;
		num2 += 1;

		return *this;
	}

	NUMBOX operator++(int)	// 후위 증가
	{
		NUMBOX temp(*this);

		num1 += 1;
		num2 += 1;

		return temp;
	}
};

int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX nb2;

	nb2 = nb1++;	// nb1++ = operator++(int); 와 같이 후위 증가 연산
	nb2.ShowNumber();
	nb1.ShowNumber();

	nb2 = ++nb1;	// ++nb1 = nb.operator++(); 와 같이 전위 증가 연산
	nb2.ShowNumber();
	nb1.ShowNumber();

	return 0;
}

// --------------------------------------------------

/// 대입 연산자 오버로딩

#include <iostream>

using namespace std;

class A
{
private:
	int num1, num2;
public:
	A() {}	// 디폴트 생성자
	A(int num1, int num2) : num1(num1), num2(num2) {}
	void ShowData() { cout << num1 << "," << num2 << endl; }
};

class B
{
private:
	int num1, num2;
public:
	B() {}	// 디폴트 생성자
	B(int num1, int num2) : num1(num1), num2(num2) {}
	void ShowData() { cout << num1 << "," << num2 << endl; }
};

int main()
{
	A a1(10, 50);
	A a2;

	B b1(10, 20);
	B b2;

	a2 = a1;	// 클래스의 대입	// 얕은 복사
	b2 = b1;

	a2.ShowData();
	b2.ShowData();

	return 0;
}

// --------------------------------------------------

/// 대입 에러 상황
/// (깊은 복사에 대한 정의, 연산자 오버로딩을 통해 처리)

#include <iostream>

using namespace std;

class Student
{
private:
	char* name;
	int age;
public:
	Student(char* name, int age) : age(age)
	{
		this->name = new char[10];
		strcpy(this->name, name);
		cout << "Student 생성자 호출" << endl;
	}

	~Student()
	{
		delete[] name;
		cout << "Student 소멸자 호출" << endl;
	}

	void ShowInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
};

int main()	// 얕은 복사의 Error 발생!!
{
	Student st1("장원영", 20);
	Student st2("안유진", 21);

	st2 = st1;

	st1.ShowInfo();
	st2.ShowInfo();

	return 0;
}

// --------------------------------------------------

/// 위 오류 상황 해결 (깊은 복사)

#include <iostream>

using namespace std;

class Student
{
private:
	char* name;
	int age;
public:
	Student(char* name, int age) : age(age)
	{
		this->name = new char[10];
		strcpy(this->name, name);
		cout << "Student 생성자 호출" << endl;
	}

	~Student()
	{
		delete[] name;
		cout << "Student 소멸자 호출" << endl;
	}

	void ShowInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	Student& operator=(Student& ref)
	{
		delete[] name;
		name = new char[10];	// 다시 동적 할당
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}
};

int main()	// 깊은 복사로 Error 해결!!
{
	Student st1("장원영", 20);
	Student st2("안유진", 21);

	st2 = st1;

	st1.ShowInfo();
	st2.ShowInfo();

	return 0;
}
*/
