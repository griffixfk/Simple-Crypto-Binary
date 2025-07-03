# Simple C++ Program for Working with Binary Files

## Description

This project demonstrates a simple C++ program for working with binary files 
using the `fstream` library. The program allows you to encrypt and decrypt files 
using a simple XOR encryption algorithm, with a random key generated each time 
encryption is performed.

The primary goal of this project is to show how to handle binary files in C++ 
and provide an example that can be useful for practical work with `fstream`.

## Functionality

- **File Loading**: The program opens a file in binary mode using the `fstream` 
  library.
  
- **Encryption (_CryptingFile)**: The program encrypts the file contents using 
  the XOR algorithm. The key for encryption is randomly generated each time 
  encryption is triggered.
  
- **Decryption (_DeCryptingFile)**: The program can restore the original file 
  by using the same random XOR key that was used for encryption.
  
- **Menu Selection**: The user can choose whether to encrypt or decrypt a file.

## How it Works

- **XOR encryption** is one of the simplest encryption methods, where the XOR 
  operation is applied to each byte of data.
  
- The key for encryption is randomly generated each time encryption is called, 
  and the same key is used for decryption.

## Important Notes

- This is a **minimal example** of binary file handling and encryption. It 
  uses the XOR algorithm, which is not a secure encryption method, but is easy 
  to implement and understand.
  
- The file contents are scrambled (or "garbage") after encryption and can only 
  be restored if the same key is used for decryption.

## Requirements

- **Visual Studio 2022** (recommended) or another C++ IDE/compiler that supports 
  C++14 or higher.
