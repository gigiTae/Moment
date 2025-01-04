#include <iostream>

class A
{
public:

	void Func();
};

void A::Func()
{
	static constexpr float Min = 0.f;
	
	constexpr float Min2 = 0.f;
	
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

