#include "inlcude.h"

#include <random>

#include <thread>
#include <chrono>


int main()
{
	const char* defaultFile = "X:\\Test.exe";

	srand(time(NULL));

	unsigned char key;

	int choice = 0;


	while (1)
	{
		std::cout << "1 = Crypting\n2 = DeCrypting" << std::endl;
		std::cin >> choice;

		if (choice == 1)
		{
			key = rand();
			if (crypt._CryptingFile(defaultFile, key))
				std::cout << "Good crypting" << std::endl;

			else
			{
				std::cout << "Error crypting" << std::endl;
				return 1;
			}

		}
		else if (choice == 2)
		{
			if (crypt._DeCryptingFile(defaultFile, key))
				std::cout << "Good decrypting" << std::endl;
			else
			{
				std::cout << "Error decrypting" << std::endl;
				return 2;
			}


		}

		std::this_thread::sleep_for(std::chrono::milliseconds(300));
	}
	return 0;
}