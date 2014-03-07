#include <iostream>

int main(int argc, char * argv)
{
	std::cout << argc << argv << std::endl;
	for(int n = 0; n < 100; ++n)
	{
		std::cout << n << " ";
		std::cin >> n;
	}
}

