#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <codecvt>
#include "Sample_text.h"
using namespace std;
/*BOOL WritenodeRecurse(HKEY hKeyRoot, LPCTSTR lpSubKey, int number)
{
	LONG lResult;
	DWORD dwSize;
	TCHAR szName[MAX_PATH];
	HKEY hKey;
	FILETIME ftWrite;

	lResult = RegOpenKeyEx(hKeyRoot, lpSubKey, 0, KEY_READ, &hKey);

	if (lResult != ERROR_SUCCESS)
	{
		if (lResult == ERROR_FILE_NOT_FOUND) {
			printf("Key not found.\n");
			return TRUE;
		}
		else {
			printf("Error opening key.\n");
			return FALSE;
		}
	}

	dwSize = MAX_PATH;
	string name_usb = "";
	lResult = RegEnumKeyEx(hKey, number, szName, &dwSize, NULL, NULL, NULL, &ftWrite);
	if (lResult == ERROR_SUCCESS)
	{

		fstream info;
		info.open("D:/123.txt", fstream::in | fstream::out | ios::app);
		wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> codec;
		name_usb = codec.to_bytes(szName);
		info << name_usb << endl;
		info.close();

	}
	RegCloseKey(hKey);
}*/

int __cdecl main()
{
	audit(a);
	for (int i = -1; i < 50; i++)
	{
		a.WritenodeRecurse(HKEY_LOCAL_MACHINE, L"SYSTEM\\ControlSet001\\Enum\\USBSTOR", i);
		a.output();
		
	}

	return 0;

}
