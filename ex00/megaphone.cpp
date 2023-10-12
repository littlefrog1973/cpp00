#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
		for (i = 1; i < argc; ++i)
		{
			std::string InputString = argv[i];
			std::string CapitalizedStr;

			for (size_t j = 0; j < InputString.length(); ++j)
			{
				CapitalizedStr +=toupper(InputString[j]);
			}
			std::cout << CapitalizedStr;
		}
	std::cout << std::endl;
	return (0);
}
