//
//  14_템플릿.cpp
//  CppProject
//
//  Created by 오나현 on 12/24/24.
//

/*
/// 템플릿 (Template)

// 틀, 주형, 국화모양틀...
// 빵반죽을 넣으면 국화모양 빵이 나온다.
// 초콜렛을 넣으면 국화모양 초콜렛이 나온다.

// --------------------------------------------------

/// 함수 템플릿 (Function Template)

#include <iostream>

using namespace std;

//void swap(int& num1, int& num2)	// 일반 함수
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}

template <typename T>				//template <class T> // 왼쪽과 같은 코드
void Swap(T& num1, T& num2)			// 템플릿을 사용한 함수
{
	T temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	// 정수
	int num1 = 10, num2 = 40;

	cout << "[Before] num1 : " << num1 << ", num2 : " << num2 << endl;

	//Swap(num1, num2);		// 가능 // 아래와 같은 코드
	Swap<int>(num1, num2);	// 가능 // 가능한 이 코드로 사용하기!

	cout << "[After] num1 : " << num1 << ", num2 : " << num2 << endl;

	// --------------------------------------------------

	// 실수
	double num3 = 10.25f, num4 = 40.44f;

	cout << "[Before] num3 : " << num3 << ", num4 : " << num4 << endl;

	Swap(num3, num4);			// 가능
	//Swap<double>(num3, num4);	// 가능

	cout << "[After] num3 : " << num3 << ", num4 : " << num4 << endl;

	return 0;
}

// --------------------------------------------------

/// 클래스 템플릿 (Class Template)

#include <iostream>

using namespace std;

template <typename T>
class Data
{
private:
	T date;
public:
	Data(T data) : data(data) {}

	void ShowInfo() { cout << data << endl; } /////////////////////////////////////////////////// 오류 왜 나지???????????????????????????
};

int main()
{
	Data<int> data1(50);
	data1.ShowInfo();

	Data<char> data2('A');
	data2.ShowInfo();

	Data<double> data3(24.377);
	data3.ShowInfo();

	return 0;
}
*/
