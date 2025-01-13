//
//  9_STL_스택.cpp
//  CppProject
//
//  Created by 오나현 on 01/13/25.
//

/*
/// Stack Container
/// LIFO 방식 (Last In First Out)

/// adapter 방식 : vector, deque, list container 에 붙여서 (기반으로) 사용이 가능하다.

/// 내부적으로 vector, deque, list 구조로 구현이 되어있으나, 
/// stack 이라는 포장지로 잘 감싸서 stack 과 같이 작동하도록 멤버 함수 등을 지원해주는 것

/// default 는 deque container 기반으로 작동한다.

// --------------------------------------------------

/// Stack 사용법

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <stack>		// <stack> 헤더파일

using namespace std;

int main()
{
	// 생성 방법
	stack<int> st;
	stack<string> st2;

	// 내부 컨테이너 구조를 바꾸는 형식
	// stack< [Data Type], [Container Type] >[변수 이름];
	stack<int, list<int>> st3;
	//stack<stack, vector<string>> st4;

	// 연산자 사용 가능 (==, !=, <, >, <=, >=)

    // --------------------------------------------------

	// 멤버 함수

	st.empty();		// 비어있는지 확인

	st.size();		// 사이즈 반환

	st.top();		// 맨 위에 있는 인자 반환

	st.push(999);	// 데이터 삽입 (value)

	st.pop();		// top이 가리키는 원소를 삭제

	return 0;
}

// --------------------------------------------------

/// 예제

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);

	// 확인 출력
	cout << "st.size() : " << st.size() << endl << endl;

	// 인자 출력
	cout << "st.top() -> st.pop()" << endl;		// 구조 설명 출력
	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}

// --------------------------------------------------

/// 예제
/// 간단한 괄호 검사 (오류 검사) = () {} []

#include <iostream>
#include <stack>

using namespace std;

void Error()
{
	cout << "=> Wrong!" << endl;
}

int main()
{
	stack<char> st;

	// 기본 6개만 입력 받도록 해보자.
	// 괄호의 우선순위는 고려하지 않는다.

	char c;

	for (int i = 0; i < 6; i++)
	{
		cin >> c;

		// 초기 입력이 닫힘인 경우 : ), }, ]
		if (c == ')' || c == '}' || c == ']')
		{
			// 초기 입력이 닫는 괄호가 오는 경우 ==> 오류
			if (st.empty())
			{
				Error();
				return -1;
			}

			// 짝이 맞는지 확인
			if ((c == ')' && st.top() == '(') ||
				(c == '}' && st.top() == '{') ||
				(c == ']' && st.top() == '['))
			{
				st.pop();		// 맞으면 pop
				continue;
			}
		}

		st.push(c);
	}

	// 다 끝났는데 남아있는 경우
	if (!st.empty())
	{
		Error();
		return -1;
	}

	// 짝이 맞는 경우
	cout << "=> Correct!" << endl;

	return 0;
}
*/
