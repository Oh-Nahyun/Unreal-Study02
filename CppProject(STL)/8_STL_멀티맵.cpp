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

    return 0;
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

    // --------------------------------------------------

    // 중복 인자 2개 추가
    mm.insert(pair<int, int>(40, 44));
    mm.insert(pair<int, int>(40, 3));

    // 접근 방법 (확인)
    for (iter = mm.begin(); iter != mm.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // --------------------------------------------------

    // 정보 출력
    cout << "size() : " << mm.size() << endl;
    cout << "count(40) : " << mm.count(40) << endl << endl;

    return 0;
}

// --------------------------------------------------

/// 예제
/// upper_bound, lower_bound

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> mm;

    mm.insert(pair<int, string>(60, "C"));
    mm.insert(pair<int, string>(30, "C++"));
    mm.insert(pair<int, string>(40, "Linux"));
    mm.insert(pair<int, string>(90, "JAVA"));
    mm.insert(pair<int, string>(40, "Ubunto"));
    mm.insert(pair<int, string>(20, "Unix"));
    mm.insert(pair<int, string>(40, "CentOS"));

    multimap<int, string>::iterator iter;

    // 접근 방법 (확인)
    for (iter = mm.begin(); iter != mm.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // --------------------------------------------------

    // 중복 키 값 출력 (40)
    for (iter = mm.lower_bound(40); iter != mm.upper_bound(40); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // 인자 >= lower_bound
    // 인자 < upper_bound
    // [ lower_bound, upper_bound ) 개폐구간

    multimap<int, string>::iterator lower_iter = mm.lower_bound(40);
    multimap<int, string>::iterator upper_iter = mm.upper_bound(40);

    cout << "lower_iter : " << lower_iter->first << ", " << lower_iter->second << endl;
    cout << "upper_iter : " << upper_iter->first << ", " << upper_iter->second << endl;

    return 0;
}
*/

// --------------------------------------------------

/// 예제
/// equal_range (pair)

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> mm;

    mm.insert(pair<int, string>(60, "C"));
    mm.insert(pair<int, string>(30, "C++"));
    mm.insert(pair<int, string>(40, "Linux"));
    mm.insert(pair<int, string>(90, "JAVA"));
    mm.insert(pair<int, string>(40, "Ubunto"));
    mm.insert(pair<int, string>(20, "Unix"));
    mm.insert(pair<int, string>(40, "CentOS"));

    multimap<int, string>::iterator iter;

    // 접근 방법 (확인)
    for (iter = mm.begin(); iter != mm.end(); iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // --------------------------------------------------

    // 중복 키 값 출력 (40)
    for (iter = mm.equal_range(40).first; iter != mm.equal_range(40).second; iter++)
    {
        cout << "[ " << iter->first << ", " << iter->second << " ]";
    }
    cout << endl << endl;

    // 인자 >= equal_range.first
    // 인자 < equal_range.second
    // [ first, second ) 개폐구간

    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> pair_iter = mm.equal_range(40);

    cout << "pair_iter.first : " << (pair_iter.first)->first << ", " << (pair_iter.first)->second << endl;
    cout << "pair_iter.second : " << (pair_iter.second)->first << ", " << (pair_iter.second)->second << endl;

    return 0;
}
