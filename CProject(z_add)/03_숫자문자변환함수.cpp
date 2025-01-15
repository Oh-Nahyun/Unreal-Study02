//
//  03_숫자문자변환함수.cpp
//  CppProject
//
//  Created by 오나현 on 01/15/25.
//

/*
/// atoi, atof, atol 함수 이름의 기원
a = char(ASCII), i = int, f = float, l = long;

atoi = char(ASCII) to Integer;
atof = char(ASCII) to double(Float);
atol = char(ASCII) to long int;

// --------------------------------------------------

/// 헤더 파일
#include <stdlib.h>		// C
#include <cstdlib>		// C++

// --------------------------------------------------

/// (과거) 예시
// char* --> string
char* cStr = "CString";
string cppStr = cStr;

// string --> char*
string cppStr2 = "CPPString";
const char* cStr2 = cppStr2.c_str();

// char* --> int
char* cStr = "20250115";
int num = atoi(cStr);

// string --> char* --> int
string s = "2025";
int num = atoi(s.c_str());

// --------------------------------------------------

/// C++ 에서 string 타입의 문자열을 숫자로 바꾸는 함수들의 이름

stoi = string to int;
stof = string to float;
stol = string to long int;
stod = string to double;

stoui = string to unsigned int;
stoll = string to long long;
stoull = string to unsigned long long;
stold = string to long double;

// --------------------------------------------------

/// 사용법

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str_i  = "22";
	string str_li = "2144967290";
	string str_f  = "3.4";
	string str_d  = "2.112546";

	int i       = stoi(str_i);
	long int li = stol(str_li);
	float f     = stof(str_f);
	double d    = stod(str_d);

	cout << i  << endl;
	cout << li << endl;
	cout << f  << endl;
	cout << d  << endl;

	return 0;
}

// --------------------------------------------------

/// [C++] to_string 함수에 대해서.. (int to string)

string to int 로 변경하는 함수 stoi 함수
char* to int 로 변경하는 함수 atoi 함수

// std::to_string 함수 원형

<string> 헤더 파일

string to_string(int num);
string to_string(long num);
string to_string(long long num);
string to_string(unsigned int num);
string to_string(unsigned long num);
string to_string(unsigned long long num);
string to_string(float num);
string to_string(double num);
string to_string(long double num);

// std::to_string 함수 설명
to_string 함수는 숫자 타입의 데이터를 !!안전!!하게 string 타입으로 변경하는 함수
to_string(숫자); 이런식으로 사용하면 된다.

// --------------------------------------------------

/// 예시

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1 = 10;
	float num2 = 22.1f;

	string str1 = to_string(num1);

	cout << str1 << endl;
	cout << to_string(num2) << endl;

	// HP.ToString();		// 유니티, 언리얼..

	return 0;
}
*/
