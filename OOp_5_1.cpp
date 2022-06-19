#include <string>
#include <iostream>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
    /*string str;
    getline(cin, str);
    cin >> str;
    str.find("  ");*/
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string path, temp,temp1;
	path = "OOp_5_1.cpp";
	ifstream inAll;
	inAll.open(path);

	if (!inAll.is_open())
	{
		cout << "Ошибка открытия!";
	}
	else
	{
		while (!inAll.eof())// sdf\dsfdssadasfasd
		{

			getline(inAll, temp);
			if (temp.find("/*") != string::npos)
			{
			int i = temp.find("/*");
			//cout << i << endl;
			if (i != 0)
			{
				temp.resize(i);
				temp1 += temp;
				temp1 += "\n";
			}
			}
			//cout << temp.find("//") << endl;
			if (temp.find("//") == string::npos)
			{
				temp1 += temp;
				temp1 += "\n";
			}
			else if (temp.find("//") != string::npos)
			{
				int i = temp.find("//");
				//cout << i << endl;
				if(i != 0)
				{
					temp.resize(i);
					temp1 += temp;
					temp1 += "\n";
				}
			}
			
		}
	}
	inAll.close();
	cout << temp1;
	cout << endl;

	//temp1.find("//");

	path = "OOp_5_1.txt";
	ofstream all;
	all.open(path, ofstream::out);
	if (!all.is_open())
	{
		cout << "Ошибка!";
	}
	else
	{
		all << temp1;
	}
	all.close();
	//string path = "source\\catalog.txt";
//ofstream all;
//all.open(path, ofstream::out);
//if (!all.is_open())
//{
//	cout << "Ошибка!";
//}
//else
//{
//	for (int i = 0; i < size; i++) {
//		all << a[i].title << "\n" << a[i].author << "\n" << a[i].text << "\n"
//			<< a[i].year << "\n" << a[i].fileWithText << endl;
//	}
//}
//all.close();
}

//string path = "source\\catalog.txt";
//ofstream all;
//all.open(path, ofstream::out);
//if (!all.is_open())
//{
//	cout << "Ошибка!";
//}
//else
//{
//	for (int i = 0; i < size; i++) {
//		all << a[i].title << "\n" << a[i].author << "\n" << a[i].text << "\n"
//			<< a[i].year << "\n" << a[i].fileWithText << endl;
//	}
//}
//all.close();