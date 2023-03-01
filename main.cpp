#include <iostream>
#include <conio.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		{
			if (key == 'w')
				cout << "Вперед" << endl;
			else if (key == 's')
				cout << "Назад" << endl;
			else if (key == 'a')
				cout << "Влево" << endl;
			else if (key == 'd')
				cout << "Вправо" << endl;
			else if (key == ' ')
				cout << "Прыжок" << endl;
			else if (key == 13)
				cout << "Огонь" << endl;
			else
				cout << "Error" << endl;
		}
	} while (key!=27);
}