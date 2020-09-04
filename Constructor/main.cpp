#include <iostream>
class Entity
{
public:

	float X, Y;

	void Init()
	{
		X = 0.0f;
		Y = 0.0f;

	}
	void print()
	{
		std::cout << X << "," << Y << std::endl;

	}
};

int main()
{
	Entity e1;
	e1.Init();
	e1.print();
	std::cin.get();

}