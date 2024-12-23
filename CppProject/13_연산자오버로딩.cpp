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
*/
