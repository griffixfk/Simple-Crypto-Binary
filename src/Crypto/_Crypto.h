#pragma once


#include <Entry/inlcude.h>

class CoreCrypto
{
public:
	std::vector<unsigned char> _FileOperat(const char* fileStartPATH);
	bool _CryptingFile(const char* fileOp, unsigned char key);
	bool _DeCryptingFile(const char* CryptingFile, unsigned char key);

};


extern CoreCrypto crypt;