#include <iostream>

using namespace std;

char ansWer;
int n;
int factorial(int n);
int fibonacci(int n);

int main()
{
	int i = 0;
	cout << endl << endl;
	cout << "Would you like to try F(a)ctorial or F(i)bonacci? ";
	cin >> ansWer;


	if (ansWer == 'a')
	{
		cout << "Factorial " << endl<< endl;
		cout << "what number do you want the factorial? ";
		cin >> n;
		cout << "\n the result is " << factorial(n) << endl;


	}
	else if (ansWer == 'i')
	{
		cout << "Fibonacci" << endl;
		cout << "How many numbers would you like to count? ";
		cin >> n;
		if (n < 1)
			cout << " The number must be greater than 0 ";
		else
		{
			cout << "The series looks like this " << endl;
			while (i < n)
			{
				cout << " " << fibonacci(i);
				i++;
			}
		}
	}

	else cout << " Not going to happen ";
	cout << endl;
	system("Pause");
	return 0;
}


int factorial(int n)
{
	if (n > 1)
		return factorial(n - 1)*n;
	else return 1;
}

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
	{
		return  fibonacci(n - 1) + fibonacci(n - 2);
				
	}
	
}
