#include <iostream>
#include <cctype>

int main()
{
	char ch;
	std::cout << "program zamienia male litery na duze i pomija liczby.\n Aby zakonczyc wprowadz @\n";
	while (std::cin.get(ch) && ch != '@')
	{
		if (islower(ch))
			std::cout << char(toupper(ch));
		else if (isupper(ch))
			std::cout << char(tolower(ch));
		else if (isdigit(ch));
		else
			std::cout << ch;
	}

	std::cin.get();
	std::cin.get();
	return 0;
}