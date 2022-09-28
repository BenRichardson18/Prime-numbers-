#include <iostream>
using namespace std; 

int main()
{
	// We have set variables for our operation
	int n;
	int i;
	int m = 0;
	int flag = 0;

	//We ask the user for a number

	cout << "Enter the Number to check Prime: "; 
	
	// The user inputs the number and is later calculated 
	cin >> n; 
	m = n / 2; 
	
	// With the solution from the number we assign a jump statement to verify if the number is a prime number or not  

	for (i = 2; i <= m; )
	{
		if (n % i == 0)
		{
			cout << "Number is not Prime."; 
			flag = 1; 
			break; 
		}
	}
	if (flag == 0)

		cout << "Number is Prime." << endl;
	return 0; 
}