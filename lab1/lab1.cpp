#include <iostream>
#include <string>
#include <fstream>


using namespace std;


/*
int main()
{
	setlocale(LC_ALL, "ru");

	string path = "main.txt";

	ifstream fin;
	
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Файл открыт успешно!" << endl;
		string str;

		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << "Hello, " << str << "!" << endl;
		}
	}

	fin.close();

	return 0;
}
*/

int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; i++)
	{
		cout << "Hello " << argv[i] << "!" << endl;
	}
	return 0;
}
