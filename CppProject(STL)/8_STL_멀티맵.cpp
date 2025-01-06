//
//  8_STL_멀티맵.cpp
//  CppProject
//
//  Created by 오나현 on 01/06/25.
//

/*
/// Multimap container
/// map 과 한 부분만 다르다!
/// key 값이 중복 가능하다.

// --------------------------------------------------

/// Multimap 사용법

#include <iostream>
#include <string>
#include <map>		// <map> 헤더파일

using namespace std;

int main()
{
    // 선언 예시
    multimap<int, int> mm1;
    multimap<string, int> mm2;

    mm1.insert(pair<int, int>(2025, 106));
    mm2.insert(pair<string, int>("aaa", 27));

    /// [중요!!!] map 과의 다른 점
    /// operator[] 을 사용해서 원소를 추가 또는 수정이 불가능하다!!!

    // --------------------------------------------------

    // multimap의 멤버 함수
    // set 을 참조해라.
    m.insert(k);    // k는 pair 객체이다.

    m.upper_bound(k);   // multimap 예제 참고
    m.lower_bound(k);
    m.equal_range(k);

    // --------------------------------------------------

    multimap<int, int> mm;
    pair<multimap<int, int>::iterator, multimap<int, int>::iterator> pair_iter = mm.equal_range(6);

    return 0
}

// --------------------------------------------------

/// 예제
/// insert

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<int, int> mm;

    mm.insert(pair<int, int>(60, 6));
    mm.insert(pair<int, int>(30, 3));
    mm.insert(pair<int, int>(70, 7));
    mm.insert(pair<int, int>(90, 9));
    mm.insert(pair<int, int>(40, 4));
    mm.insert(pair<int, int>(20, 2));
    mm.insert(pair<int, int>(50, 5));
    mm.insert(pair<int, int>(80, 8));

    multimap<int, int>::iterator iter;

    // 접근 방법 (확인)
    for (iter = mm.begin(); iter != mm.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    return 0
}
*/
