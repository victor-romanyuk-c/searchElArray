#include<iostream>

int searchArrEl(int*, int, int);

int main()
{
	int numbers[] = { 5, 8, 4, 1, 6, 4, 85, 9 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int index = 0, myNum = 0;

	std::cout << "Enter a number to search for: \n";
	std::cin >> myNum;

	index = searchArrEl(numbers, size, myNum);

	std::cin.clear();
	std::cin.ignore(10000, '\n');
	fflush(stdin);

	if (index != -1)
	{
		std::cout << "Element " << myNum << ", is at index "\
			<< index << '\n';
	}
	else
	{
		std::cout << "Number " << myNum << " is not in the array.\n";
	}

	return EXIT_SUCCESS;
}

int searchArrEl(int* Array, int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (Array[i] == element)
		{
			std::cout << "Element found at index: " << i << std::endl;
			return i;
		}
	}
	return 0;
}
