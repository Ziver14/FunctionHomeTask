#include <iostream>

void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

int mean_arr(int arr[], const int lenght) {
	double sum = 0.0;
	for (int i = 0; i < lenght; i++) {

		sum += arr[i];
	}
	double array_arr = sum / lenght;

	return array_arr;
}

void powers(int num1, int num2) {
	int pow = 1;
	std::cout << num1 << " в степени " << 0 << " = " << pow << '\n';
	for (int i=0; i < num2; i++) {
		pow *= num1;
		std::cout << num1<< " в степени "<< i+1 << " = " << pow << '\n';

	}
}
void positive_arr(int arr[],const int length){
	for (int i = 0; i < length; i++) {
		if(arr[i]<0)
		arr[i] = arr[i] * -1;
	}
}


	
int main() {
	setlocale(LC_ALL, "ru");
	int n,m;

	//Задача 1. Среднеарифметическое.
	std::cout << " Введите два числа ->";
	std::cin >> n >> m;
	std::cout <<" Среднеарифметическое "<< n << " и " << m << " = " << mean(n, m) << "\n\n";

	//Задача 2. Среднеарифметическое массива.
	const int size = 4;
	int arr1[size]{ 6,-4,9,-1 };
	std::cout << "Массив\n";
	print_arr(arr1, size);
	std::cout << '\n';
	std::cout << "Среднеарифметическое массива равно = " << mean_arr(arr1, size)<< "\n\n";

	//Задача 3. Возведение в степень.
	std::cout << " Введите два числа ->";
	std::cin >> n >> m;
	powers(n,m);
	std::cout << '\n';

	//Задача 4. Положительный массив.
	std::cout << " Массив\n";
	print_arr(arr1, size);
	positive_arr(arr1, size);
	std::cout << " Положительный массив\n";
	print_arr(arr1, size);





	return 0;
}