//
//  4_STL_Pair클래스.cpp
//  CppProject
//
//  Created by 오나현 on 01/02/25.
//

/*
/// pair 클래스
/// 두 객체를 하나의 객체로 취급할 수 있도록 묶어주는 클래스
/// STL에서 데이터 쌍을 표현할 때 사용
/// #include <utility>에 존재

/// pair 클래스의 구조
// template <class T1, class T2> struct pair;
// template <typename T1, typename T2> struct pair;
// T1 : first
// T2 : second 로 구분한다.

// --------------------------------------------------

/// 멤버 함수 및 간단한 사용법
// pair<[type1], [type2]> p;
// 사용할 데이터 타입 1, 2를 넣고 그 타입의 pair 클래스인 p를 만든다.

// p.first  : p의 첫번째 인자를 반환해준다.
// p.second : p의 두번째 인자를 반환해준다.

// make_pair(변수1, 변수2) : 변수1과 변수2가 들어간 pair를 만들어준다.

// operator로 (==, !=, <, >, <=, >=)가 정의되어 있어 사용 가능하다.

// --------------------------------------------------

/// 사용 예제 (대소 비교) (int, string인 경우)

#include <iostream>
#include <utility>
#include <string>

using namespace std;

void same(pair<int, string> a, pair<int, string> b)
{
	if (a == b) cout << "true" << endl;
	else cout << "false" << endl;
}

void compare(pair<int, string> a, pair<int, string> b)
{
	if (a < b) cout << "true" << endl;
	else cout << "false" << endl;
}

int main()
{
	pair<int, string> p1 = make_pair(1, "aaa");
	pair<int, string> p2 = make_pair(3, "bbb");
	pair<int, string> p3 = make_pair(1, "aaa");

	cout << "p1.first : " << p1.first << endl;
	cout << "p1.second : " << p1.second << endl << endl;

	// 같은지 비교
	cout << "p1 == p2 ? ";
	same(p1, p2);
	cout << "p1 == p3 ? ";
	same(p1, p3);
	cout << endl;

	// 대소 비교
	cout << "p1 < p2 ? ";
	compare(p1, p2);
	cout << "p1 < p3 ? ";
	compare(p1, p3);
	cout << endl;

	return 0;
}

// --------------------------------------------------

/// vector 컨테이너의 타입으로 pair를 사용하는 경우 + 정렬(sort)

#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int, string>> v;

	v.push_back(pair<int, string>(3, "fff"));
	v.push_back(pair<int, string>(6, "ggg"));
	v.push_back(pair<int, string>(1, "kkk"));
	v.push_back(pair<int, string>(4, "aaa"));
	v.push_back(pair<int, string>(2, "bbb"));
	v.push_back(pair<int, string>(2, "ccc"));

	vector<pair<int, string>>::iterator iter;

	// 확인 출력
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		// cout << (*iter).first << ", " << (*iter).second << endl; // 아래와 같은 코드
		cout << iter->first << ", " << iter->second << endl;
	}
	cout << endl << endl;

	// 정렬
	sort(v.begin(), v.end());

	// 확인 출력
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << iter->first << ", " << iter->second << endl;
	}
	cout << endl << endl;

	return 0;
}
*/
