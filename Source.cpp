#include <iostream>
using namespace std; 

void PrintNumbers(int maxNo)
{
	for (int i = 1; i < maxNo; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "KalleKula" << endl; 
		}
		else if (i % 5 == 0)
		{
			cout << "Kula" << endl; 
		}
		else if (i % 3 == 0)
		{
			cout << "Kalle" << endl; 
		}
		else
		{
			cout << i << endl; 
		}
    }
}
int main()
{
	PrintNumbers(101); 
	system("pause");
}
