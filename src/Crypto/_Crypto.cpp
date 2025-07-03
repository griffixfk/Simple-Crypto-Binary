#include "_Crypto.h"

#include <fstream>



CoreCrypto crypt;


std::vector<unsigned char> CoreCrypto::_FileOperat(const char* fileStartPATH)
{
	if (!fileStartPATH)
	{
		std::cout << "Eror start file" << std::endl;
		return {};
	}

	std::ifstream file(fileStartPATH, std::ios::binary);
	if (!file.is_open())
	{
		std::cerr << "Error open fileStart" << GetLastError() << std::endl;
		return {};
	}

	//std::cout << "File open" << std::endl;

	
	std::vector<unsigned char> datafile((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

	 file.close();

	 return datafile;
}

bool CoreCrypto::_CryptingFile(const char* fileOp, unsigned char key)
{
	//std::cout << "Key : " << key << std::endl;

	std::vector<unsigned char> buffer = _FileOperat(fileOp);
	if (buffer.empty())
	{
		std::cout << "Buffer clear" << std::endl;
		return false;
	}

	for (auto& byte : buffer)
	{
		byte ^= key;
	}

	std::ofstream file(fileOp, std::ios::binary);
	if (!file.is_open())
	{
		std::cerr << "Error open file new" <<GetLastError() << std::endl;
		return false;
	}

	file.write(reinterpret_cast<const char*>(buffer.data()), buffer.size());
	file.close();

	return true;
}

bool CoreCrypto::_DeCryptingFile(const char* cryptingfile, unsigned char key)
{
	std::vector<unsigned char> buffer = _FileOperat(cryptingfile);
	if (buffer.empty())
	{
		std::cout << "Buffer clear" << std::endl;
		return false;
	}

	for (auto& byte : buffer)
	{
		byte ^= key;
	}

	std::ofstream file(cryptingfile, std::ios::binary);
	if (!file.is_open())
	{
		std::cerr << "Error open file new" << GetLastError() << std::endl;
		return false;
	}

	file.write(reinterpret_cast<const char*>(buffer.data()), buffer.size());
	file.close();

	return true;


}


