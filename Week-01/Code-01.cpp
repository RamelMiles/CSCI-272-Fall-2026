#include <iostream>
using namespace std;
int main()
{
    int* p = new int; //*int p stands integer P
	cout << p << endl;

	*p = 25; // Declaring what *p is 

	cout << *p << endl;


	delete p; //testing what would change if we deleted P
	cout << p << endl;
	cout << *p << endl;

	p = nullptr; // Uses Null to indicate that p = 0
	cout << p << endl;
	cout << *p << endl;

}
