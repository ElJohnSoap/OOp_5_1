#include <string>
#include <iostream>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

//void lineDeletion(string& temp, string& tempAll, string comment)
//{
//	if (temp.find(comment) != string::npos)
//
//	int i = temp.find(comment);
//	if (i != 0)
//	{
//		temp.resize(i);
//		tempAll += temp;
//		tempAll += "\n";
//	}
//}
int main()
{
    /*string str;
    getline(cin, str);
    cin >> str;
    str.find("  ");*/
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string path, temp,tempAll;
	string singleLineComment = "//";
	string softwareSlash = "\"\//\"";
	cout << singleLineComment << endl << endl;
	cout << softwareSlash << endl << endl;
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
			
			if (temp.find("//") != string::npos)
			{
				if (temp.find(softwareSlash) != string::npos && temp.find("//") > temp.find(softwareSlash))
				{
					tempAll += temp;
					tempAll += "\n";
				}
				else 
				{
					int i = temp.find("//");
					if (i != 0)
					{
						temp.resize(i);
						tempAll += temp;
						tempAll += "\n";
					}
				}
			}
			else if (temp.find("/*") != string::npos)
			{
				int i = temp.find("/*");
				if (i != 0)
				{
					temp.resize(i);
					tempAll += temp;
					tempAll += "\n";				
					
				}
				getline(inAll, temp);
				while (temp.find("*/") == string::npos)
				{
					getline(inAll, temp);
					continue;
				}
				if (temp.find("*/") != string::npos)
				{
					continue;
					
				}
			}
				
			else if (temp.find("//") == string::npos)
			{
				tempAll += temp;
				tempAll += "\n";
			}
			
		}
	}
	inAll.close();
	cout << tempAll;
	cout << endl;

	//temp1.find("//"); вот такой теперь оставляет

	path = "OOp_5_1.txt";
	ofstream all;
	all.open(path, ofstream::out);
	if (!all.is_open())
	{
		cout << "Ошибка!";
	}
	else
	{
		all << tempAll;
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
/*;kjlkh
jghjghg*/