#include <iostream>

class A
{
public:

	void Func();
};

void A::Func()
{
	// 정적 메모리 
	static constexpr float Min = 0.f;
	
	// 스택 메모리 
	constexpr float Min2 = 0.f;
	
	// 스택 메모리
	const float Min3 = 0.f;

	std::cout << Min << Min2;
}


int main()
{
	A a;
	A a2;


	a.Func();
	a2.Func();

	return 0;
}

