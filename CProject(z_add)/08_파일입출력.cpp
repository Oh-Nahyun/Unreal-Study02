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

///// ifstream (Input File Stream) 파일 읽기

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
///    bool eof() const;				// 파일의 끝을 만나게 되면 true를 반환한다.

// --------------------------------------------------

/// 파일 읽기 예제

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream readFile;					// 읽을 목적의 파일 선언
	readFile.open("words.txt");			// 파일 열기

	if (readFile.is_open())				// 파일이 열렸는지 확인
	{
		while (!readFile.eof())			// 파일 끝까지 읽었는지 확인
		{
			// 1. istream 의 getline ((Error 가 날 확률이 높음))
			//char arr[256];
			//readFile.getline(arr, 256);	// 한줄씩 읽어오기
			//cout << arr << endl;

			// 2. string (std::getline 함수) ((안정적))
			string str;
			getline(readFile, str);		// 한줄씩 읽어오기
			cout << str << endl;
		}
	}

	readFile.close();					// 파일 닫기

	return 0;
}

// --------------------------------------------------

///// ofstream (Output File Stream) 파일 쓰기

/// 1. open 함수
///    void open(const char* fileName, ios_base::openmode mode = ios_base::out);
///    void open(const string& fileName, ios_base::openmode mode = ios_base::out);
/// 
///    ios_base::in = read 목적으로 open 할 것이다.;
///    ios_base::out = write 목적으로 open 할 것이다.;
///    ios_base::binary = 바이너리 형태로 open 할 것이다.;

/// 2. 열렸는지 확인하는 함수
///    bool is_open() const;

/// 3. 파일을 닫는 함수
///    void close();

/// 4. 파일에 Write 하는 함수
///    ostream& write(const char* str, streamsize len);

/// 5. 파일의 끝을 알려주는 함수
///    bool eof() const;				// 파일의 끝을 만나게 되면 true를 반환한다.

// --------------------------------------------------

/// 파일 쓰기 예제

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream writeFile;					// 저장할 목적의 파일 선언
	writeFile.open("test.txt");			// 파일 열기 (파일이 없으면 만들어진다.)

	// 1. char[] 문자열 쓰기
	//char arr[10] = "WwWwW";			// "WwWwW\0" (\0 : 파일의 끝)
	//writeFile.write(arr, 9);

	// 2. string 문자열 쓰기
	// str.c_str() : C++ string -> const char* 로 변환해주는 함수!!
	string str = "Is Good";
	writeFile.write(str.c_str(), str.size());

	writeFile.close();					// 파일 닫기

	return 0;
}
*/
