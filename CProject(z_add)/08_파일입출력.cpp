//
//  08_파일입출력.cpp
//  CppProject
//
//  Created by 오나현 on 01/17/25.
//

/*
/// C 언어
/// : fopen, fclose

// --------------------------------------------------

/// C++ 언어
/// : ifstream (Input File Stream) 파일 읽기
///	  ofstream (Output File Stream) 파일 쓰기

/// 헤더 파일 <fstream>

// --------------------------------------------------

/// 1. open 함수
///    void open(const char* fileName, ios_base::openmode mode = ios_base::in);
///    void open(const string& fileName, ios_base::openmode mode = ios_base::in);
/// 
///    ios_base::in = read 목적으로 open 할 것이다.;
///    ios_base::out = write 목적으로 open 할 것이다.;
///    ios_base::binary = 바이너리 형태로 open 할 것이다.;

/// 2. 열렸는지 확인하는 함수
///    bool is_open() const;

/// 3. 파일을 닫는 함수
///    void close();

/// 4. char 하나씩 파일에서 프로그램으로 읽어오는 Get 함수
///    istream& get(char& c);

/// 5. 한 줄씩 읽어오는 함수
///    stream& getline(char* str, streamsize len);

/// 6. 파일의 끝을 알려주는 함수
///    bool eof() const;			// 파일의 끝을 만나게 되면 True를 반환한다.
*/

// --------------------------------------------------

/// 예제

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{


	return 0;
}
