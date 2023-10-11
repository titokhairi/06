//Membuat Program Menginput Kalimat dan Memasukkan nya Kedalam Kotak
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	string str;

	cout << "Masukkan Kata: ";
	getline(cin, str);
	cout << char(218);

	for (int i = 0; i < str.length(); ++i)
	{
		cout << char(196);
	}
	{
		cout << char(191) << endl;
		cout << char(179);
		cout << str;
		cout << char(179) << endl;
		cout << char(192);
	}
	for (int i = 0; i < str.length();++i)
	{
		cout << char(196);
	}

	cout << char(217);

	cout << endl;

	system("pause");

	return 0;
}