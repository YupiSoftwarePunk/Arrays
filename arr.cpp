#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	/*int arr[4]{4, 65, 7888, 12};
	arr[0] = 1234;
	cout << arr[1] << endl;*/

	// программа заполняет список на 20 ячеек рандомными числами от -5 до 10. В первой строке выдачи 10 цифр а далее на следующей строке остальные 10 цифр
	/*int a;
	const int size = 20;
	int arr[size]{};

	for (int i=0; i < size; ++i)
	{
		arr[i] = rand() % 16 - 5;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		if (i == 9)
		{
			cout << endl;
		}
	}*/

	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	const int size = 10;
	int arr1[size], arr2[size];

	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << "Введите число: ";
		cin >> arr2[i];
		if (arr2[i] < 0)
		{
			do
			{
				cout << "Введите числo заново: ";
				cin >> arr2[i];
			} while (arr2[i] < 0);
		}

		else if (arr2[i] > 10)
		{
			do
			{
				cout << "Введите числo заново: ";
				cin >> arr2[i];
			} while (arr2[i] > 10);
		}
		if (arr1[i] == arr2[i])
		{
			cout << "Найдено совпадение: " << arr1[i] << " and " << arr2[i] << endl;
		}
	}
}