#include <iostream>
#include <vector>
#include <cmath>

bool narcissistic(int value)
{
	int lastDig = 0;
  int test = value;
 	std::vector<int> array;
	array.reserve(lastDig);
  while(test != 0)
  {
    lastDig = test % 10;
    array.push_back(lastDig);
    test /= 10;
  }
  int sum = 0;
	for (int i = 0; i < array.size(); ++i) 
	{
    int size = array.size();
    int exp = pow(array[i], size);
    sum = sum + exp;
  }

  if (sum == value)
  {
    std::cout << value << " is a narcissistic number.";
    return true;
  }
  else
    std::cout << value << " is not a narcissitic number";
    return false;

}

int main()
{
	std::cout << "Please enter an int: ";
	int num = 0;
	std::cin >> num;

	narcissistic(num);
	return 0;
}