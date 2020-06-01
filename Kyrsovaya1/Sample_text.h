#pragma once
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <codecvt>
using namespace std;


class audit
{
public:
	BOOL WritenodeRecurse(HKEY hKeyRoot, LPCTSTR lpSubKey, int number);
	void output();
    audit() :value(new char[1]{}), len(0) {};
private:
	char* value;
	int len;
	
	LONG lResult;
	DWORD dwSize;
	TCHAR szName[MAX_PATH];
	HKEY hKey;
	FILETIME ftWrite;
};