//
//  2_STL_디큐.cpp
//  CppProject
//
//  Created by 오나현 on 12/30/24.
//

/*
/// Deque Container
/// deque는 vector의 단점을 보완하기 위해 만들어진 Container이다.
/// deque와 vector는 배열 기반의 구조

/// vector의 단점
/// 1. 새로운 원소가 추가될 때마다 메모리를 재할당 후 이전 원소를 복사하는 방식.
/// 2. 삽입 시에 성능이 저하된다.

/// deque는 이러한 단점을 보완하기 위해 여러개의 메모리 블록을 할당하고,
/// 하나의 블록처럼 여기는 기능을 제공한다.

/// --> deque는 메모리가 부족할 때마다 일정한 크기의 새로운 메모리 블록을 할당하고,
///     이전 원소를 복사하지 않는다.

/// --> 데이터의 삽입과 삭제가 front와 back에서 이루어진다.

// --------------------------------------------------

/// Deque의 사용

#include <iostream>
#include <deque>			// deque 사용을 위한 헤더 파일

using namespace std;

int main()
{
	/// deque 선언
	/// deque의 생성자와 연산자
	deque<int> dq1;			// 비어있는 dq1 생성
	deque<int> dq2(5);		// 기본값이 0으로 초기화된, 5개의 원소를 가진 dq2 생성
	deque<int> dq3(5, 2);	// 기본값이 2으로 초기화된, 5개의 원소를 가진 dq3 생성
	deque<int> dq4(dq3);	// dq4는 dq3를 복사하여 생성 (깊은 복사)

	/// 비교 가능
	/// 연산자로 대소 비교 가능. (== != > < >= <=)

	/// deque 멤버 함수
	/// deque에는 capacity 멤버 함수가 없다!!
	int n = 100;		// 
	int index = 0;

	deque<int> dq;		// 기본

	dq.assign(5, 2);	// 2의 값으로 5개의 원소 할당

	dq.at(index);		// index번째 원소를 참조 (범위 점검이 된다. (예시로 index = 7이면 범위를 벗어남을 점검해주어 안전하다는 장점이 있다.))

	dq[index];			// index번째 원소를 참조 (범위 점검을 안하여 v.at(index)보다 속도가 빠르다.)

	dq.front();			// 첫번째 원소를 참조

	dq.back();			// 마지막 원소를 참조

	dq.clear();			// 모든 원소를 제거


	dq.push_front(3);	// 첫번째 원소 앞에 원소 3을 삽입

	dq.pop_front();		// 첫번째 원소를 제거

	dq.push_back(7);	// 마지막 원소 뒤에 원소 7을 삽입

	dq.pop_back();		// 마지막 원소를 제거


	dq.begin();			// 첫번째 원소를 가리킨다. (iterator와 함께 사용)

	dq.end();			// 마지막의 "다음"을 가리킨다. (iterator와 함께 사용)

	dq.rbegin();		// reverse begin (거꾸로해서 첫번째 원소를 가리킨다.) (iterator와 함께 사용)

	dq.rend();			// reverse end (거꾸로해서 마지막의 "다음"을 가리킨다.) (iterator와 함께 사용)


	dq.resize(n);		// 크기를 n으로 변경 (커진 경우에는 default 값인 0으로 초기화한다.)

	dq.resize(n, 3);	// 크기를 n으로 변경 (커진 경우에는 3으로 초기화한다.)

	dq.size();			// 원소의 갯수를 리턴


	deque<int> dq5;
	deque<int> dq6;
	dq6.swap(dq5);		// dq5와 dq6의 원소만 바꾼다.


	dq.insert(2, 3, 4);	// 2번째 위치에 3개의 4값을 삽입한다. (뒷 데이터는 뒤로 밀림)
	dq.insert(2, 3);	// 2번째 위치에 3의 값을 입력한다.
	// 삽입한 곳의 iterator를 반환한다.

	dq.erase(iter);		// iter가 가리키는 원소를 제거한다.
	// size만 줄어들고 capacity는 그대로 남는다.

	dq.empty();			// vector가 비었으면 리턴 true.
	// 비어있다의 기준은 size가 0이라는 뜻이다. (capacity와는 상관이 없다!)

	return 0;
}

// --------------------------------------------------

/// 예제
/// 앞뒤 삽입, 역으로 출력

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<int> dq;

	// 데이터 입력
	for (int i = 0; i < 5; i++)
	{
		dq.push_back((i + 1) * 10);
	}

	// iterator 선언
	deque<int>::iterator iter;

	// 기본 출력
	cout << "[기본] ";
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 앞뒤 삽입
	dq.push_front(1);
	dq.push_front(2);
	dq.push_back(100);
	dq.push_back(200);

	cout << "[확인] ";
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 역으로 출력 (#1)
	deque<int>::reverse_iterator rIter;
	cout << "[역순] ";
	for (rIter = dq.rbegin(); rIter != dq.rend(); rIter++)
	{
		cout << *rIter << " / ";
	}
	cout << endl << endl;

	return 0;
}

// --------------------------------------------------

/// 예제
/// 중간 삽입 & 삭제

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<string> dq;

	// 데이터 입력
	dq.push_front("bbbbb");
	dq.push_back("ccccc");
	dq.push_back("ddddd");
	dq.push_front("aaaaa");

	// iterator 선언
	deque<string>::iterator iter;

	// 기본 출력
	cout << "[기본] ";
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 삽입용 지시자
	deque<string>::const_iterator conIter = dq.begin(); // const_iterator 대신 iterator 사용해도 된다.
	conIter += 2;
	dq.insert(conIter, 2, "INSERT");

	cout << "[삽입_확인] ";
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 삭제, 위치 지정 삭제 (erase(conIter))
	conIter = dq.end();
	conIter -= 5;			// conIter--; conIter--; conIter--; conIter--; conIter--;

	//dq.erase(conIter);
	deque<string>::const_iterator conIter2 = dq.erase(conIter); // 삭제 위치를 저장하는 const_iterator

	cout << "[삭제_확인] ";
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " / ";
	}
	cout << endl << endl;

	// 역으로 출력 (#1)
	deque<string>::reverse_iterator rIter;
	cout << "[역순] ";
	for (rIter = dq.rbegin(); rIter != dq.rend(); rIter++)
	{
		cout << *rIter << " / ";
	}
	cout << endl << endl;

	// 일반 출력 (#2_vector처럼 at() 사용)
	deque<string>::size_type i;
	for (i = 0; i < dq.size(); i++)
	{
		cout << dq.at(i) << " / ";
	}
	cout << endl << endl;

	// 일반 출력 (#3_vector처럼 [] 사용)
	for (i = 0; i < dq.size(); i++)
	{
		cout << dq[i] << " / ";
	}
	cout << endl << endl;

	return 0;
}
*/
