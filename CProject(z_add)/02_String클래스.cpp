//
//  02_String클래스.cpp
//  CppProject
//
//  Created by 오나현 on 01/14/25.
//

/*
/// String 클래스, 문자열

/// 헤더파일 <string>((이 있었는데 너무 좋아서 기본으로 탑재하도록 바뀌었다.))
/// std::string; => string;

// --------------------------------------------------

/// 함수 설명

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	char c;

	// 생성
	string str("이름이름");

	string str1;
	str = "이름이름";
	//string str = "이름이름";

	string str2(str1);	// 복사 생성

	// --------------------------------------------------

	// 길이
	str.length();
	str.size();

	// 한 문자 반환 받기
	str.at(n);			// n : 위치값 (iterator)
						// n번째에 있는 문자 반환 (배열처럼 생각하면 된다.)
						// str[n]; 문자열도 사용 가능

	// 문자열 찾기
	str.find("문자열");	// 찾는 문자열의 첫번째 인자 반환
						// 못찾을 때 string::npos 반환

	str.front();		// 맨 앞의 인자 반환
	str.back();			// 맨 뒤의 인자 반환

	str.clear();		// string 이 들어있는 문자열을 지우는 함수

	str.empty();		// string 이 비어있는지 확인하는 함수

	str.capacity();		// 할당된 메모리 크기를 가져온다.

	str.c_str();		// "name" 이라는 string 이 있다면 "name\0"으로 변환해준다. (C 스타일로 변환)

	str.substr(...);	// 함수 원형 : str.substr(size_t index = 0, size_t len = npos) cont;
						// index 에서 부터 len 만큼 잘라서 반환하는 함수

	str.replace(...);	// 함수 원형 : str.replace(size_t index, size_t len, const string& str);
						// index 위치에서 len 길이까지의 범위를 매개변수로 들어온 str 전체로 대체하는 함수

	str.compare(...);	// 함수 원형 : str.compare(size_t index, size_t len, const string& str2);
	str1.compare(str2);	// 리턴값이 0(true) 이면, str1 == str2
						// 리턴값이 0보다 작으면, str1 < str2
						// 리턴값이 0보다 크면,   str2 > str2

	// 비교
	str1 < str2;
	str1 > str2;		// 사전순으로 비교 가능
	str1 == str2;

	// 연결
	str1 + str2;		// 연결(+)
	str1 += str2;		// 연결(+=)

	// 대입
	str1 = str2;

	// --------------------------------------------------

	// 기본
	str.push_back(c);
	str.pop_back();
	str.begin();
	str.end();

	return 0;
}

// --------------------------------------------------

/// String 기본 사용법

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "String";
	string str2("abcdefghijkl");
	string str3(str1);

	// 확인 출력
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// push_back, pop_back
	str1.push_back('1');
	cout << str1 << endl;
	str1.push_back('2');
	cout << str1 << endl;
	cout << endl;

	str1.pop_back();
	cout << str1 << endl;
	str1.pop_back();
	cout << str1 << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// operator+ string 뎃셈
	cout << str1 + str2 << endl;
	cout << endl;

	str1 += str2;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// 사이즈 체크
	cout << str1.size() << endl;
	cout << str1.length() << endl;
	cout << str1.capacity() << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// 사이즈 변경
	str2.resize(4);
	cout << str2 << endl;
	cout << str2.size() << endl;
	cout << str2.length() << endl;
	cout << str2.capacity() << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// 클리어
	str2.clear();
	cout << str2 << endl;
	cout << str2.size() << endl;
	cout << str2.length() << endl;
	cout << str2.capacity() << endl;
	cout << "--------------------------------------------------" << endl;

	return 0;
}

// --------------------------------------------------

/// String 추가 사용법 1

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "String";
	string str2("abcdefghijkl");
	string str3(str1);

	// 확인 출력
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// substr
	cout << str1.substr(5) << endl;
	cout << str1.substr(3, 2) << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// replace
	cout << str1.replace(3, 2, str2) << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// swap
	str3 = "C++ example";
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl << endl;

	swap(str2, str3);
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// 검색 (find, operator[], at(), front, back)

	// find
	str1 = "string";
	str2 = "abcdefghijkl";

	cout << str1.find("st") << endl;
	cout << str2.find("cdef") << endl;
	cout << str2.find("cdef", 5) << endl;
	cout << "--------------------------------------------------" << endl;

	// operator[]
	cout << str1[0] << endl;
	cout << str1[3] << endl;
	cout << str1[str1.size() - 1] << endl;
	cout << "--------------------------------------------------" << endl;

	// at()
	cout << str1.at(0) << endl;
	cout << str1.at(3) << endl;
	cout << str1.at(str1.size() - 1) << endl;
	cout << "--------------------------------------------------" << endl;

	// front, back
	cout << str1[0] << endl;
	cout << str1.at(0) << endl;
	cout << str1.front() << endl << endl;

	cout << str1[str1.size() - 1] << endl;
	cout << str1.at(str1.size() - 1) << endl;
	cout << str1.back() << endl;
	cout << "--------------------------------------------------" << endl;

	return 0;
}

// --------------------------------------------------

/// String 추가 사용법 2

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "String";
	string str2("abcdefghijkl");

	// 확인 출력
	cout << str1 << endl;
	cout << str2 << endl;
	cout << "--------------------------------------------------" << endl;

	// --------------------------------------------------

	// begin, end
	string::iterator iter = str1.begin();
	for (; iter != str1.end(); iter++)
	{
		cout << *iter << ", ";
	}
	cout << endl;
	cout << "--------------------------------------------------" << endl;

	// copy
	char arr[10];
	int arrLen = str1.copy(arr, 3, 5);

	cout << arrLen << endl;
	//cout << arr << endl;		// 문자열의 끝이 없어서 Error가 발생한다!

	arr[arrLen] = '\0';			// 문자 끝에 추가해주어야 Error가 발생하지 않는다!
	cout << arr << endl;
	cout << "--------------------------------------------------" << endl;

	// compare
	cout << str1.compare("Stringabcdefghijkl") << endl;		// compare 은 같으면 0, 다르면 -1, 1
	cout << str1.compare("String") << endl << endl;			// 다르면 -1 (사전순 앞)

	str1 = "bloc";
	str2 = "blog";
	cout << str1.compare(str2) << endl;						// 다르면 -1 (사전순 앞)
	cout << str2.compare(str1) << endl;						// 다르면  1 (사전순 뒤)
	cout << str1.compare(str1) << endl;						// 같으면  0
	cout << "--------------------------------------------------" << endl;

	return 0;
}
*/
