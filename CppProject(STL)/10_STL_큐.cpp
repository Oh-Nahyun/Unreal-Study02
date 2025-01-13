//
//  10_STL_큐.cpp
//  CppProject
//
//  Created by 오나현 on 01/13/25.
//

/*
/// Queue Container
/// FIFO (First In, First Out) 방식으로 동작한다.

/// adapter 방식 : deque, list container 에 붙여서 사용이 가능하다. (vector container 불가능)

/// 내부적으로 deque, list container 로 구현되어 있다.
/// queue 구조로 동작하도록 멤버 함수를 제공해 주는 것
/// default 는 deque container 기반으로 설정되어 있다.

// --------------------------------------------------

/// Queue 사용법

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>		// <queue> 헤더파일

using namespace std;

int main()
{
	// 생성자와 연산자
	queue<int> q;
	queue<string> q2;

	// 내부 컨테이너 구조를 바꾸는 방식
	queue<int, list<int>> q3;
	queue<int, list<string>> q4;

	// --------------------------------------------------

	// 멤버 함수

	q.front();		// 첫번째 원소에 접근한다. 들어간지 가장 오래된 원소

	q.back();		// 마지막 원소에 접근한다. 가장 최근에 들어간 원소

	q.empty();		// 비어있는지 확인 (비어있으면 true, size()가 0이면 true)

	q.size();		// 원소의 갯수 반환

	q.push(999);	// 맨뒤에 원소를 삽입

	q.pop();		// 맨앞에 있는 원소를 삭제

	return 0;
}

// --------------------------------------------------

/// 예제

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;

	// 확인 출력
	cout << "size  : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl << endl;

	// --------------------------------------------------

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);

	// 확인 출력
	cout << "size  : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl;
	cout << "front : " << q.front() << endl;
	cout << "back  : " << q.back() << endl << endl;

	// --------------------------------------------------

	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	// 확인 출력
	cout << "size  : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl << endl;

	return 0;
}
*/
