#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Это библиотека с огормным множеством функций реализовывающая
//различные базовые алгоритмы Например функция  stor
int main() {
	setlocale(LC_ALL, "Rus");
	const int size = 10;
	int arr[size];
	std::cout << "Изначальный массив: \n";
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10]
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl; //Перенос строки и очитка вывода

	// Сортировка пузырьковым методом Реализовали пробег что в тетрадке....
	//int tmp;
	//for(int i = size - 1;i > 0;i--)
	//	for(int j = 0; j<i;j++)
	//		if (arr[j] > arr[j + 1]) {
	//			tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//			//std::swap(arr[j], arr[j + 1]);
	//		}

	//Быстрая сортировка Второй способ.
	//std::sort(arr, arr + size); // два раза имя массива 


	// Вывод массива
	/*std::cout << "Отсортированный массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

		std::cout << std::endl;*/

		//  Через функцию swap
		/*for (int i = size - 1; i > 0; i--) 
			for (int j = 0; j < i; j++) // Чтобы 
				if (arr[j] > arr[j + 1]) {
					std::swap(arr[j], arr[j + 1]);
				}*/

		
	return 0;
}