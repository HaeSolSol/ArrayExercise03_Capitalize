#include <iostream>

int main()
{
	char input[255]{}, output[255]{};

	std::cout << "input : ";
	std::cin >> input;

	for (int i = 0; i < 255; ++i)
	{
		if (input[i] != '\0')
		{
			output[i] = input[i] - 32;
			continue;
		}
		break;
	}

	std::cout << "output : " << output << std::endl;
}