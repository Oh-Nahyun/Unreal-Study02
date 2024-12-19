//
//  9_프랜드.cpp
//  CppProject
//
//  Created by 오나현 on 12/19/24.
//

/*
/// 프랜드 (friend)
/// (정말 불가피할 경우에만 사용할 것! 가급적 사용하지 말 것!)

// A 클래스, B 클래스 : 친구 사이
//class A
//{
//	friend class B;
//	//...
//};

// --------------------------------------------------

#include <iostream>

using namespace std;

class B;

class A
{
private:
	int adata;
public:
	A(int _data)
	{
		adata = _data;
	}
	void ShowData(B b);
	friend class B;
};

class B
{
private:
	//friend class A;	// 이 위치에서 사용해도 된다. (위치는 상관없다.)
	int bdata;
public:
	B(int _data)
	{
		bdata = _data;
	}
	void ShowData(A a)
	{
		cout << "a.data : " << a.adata << endl;
	}
	friend class A;
};

void A::ShowData(B b)
{
	cout << "b.data : " << b.bdata << endl;
}

int main()
{
	A a(10);
	B b(20);

	a.ShowData(b);
	b.ShowData(a);

	return 0;
}
*/
