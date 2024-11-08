#include<iostream>
using namespace std;

double Math(int a, int b, int step)
{
	cout << "A:"; cin >> a;
	cout << endl;
	cout << "B:"; cin >> b;
	cout << "Press 1 for +, 2 for -, 3 for * or 4 for /:"; cin >> step;
	
	switch (step)
	{
	case 1:
		cout << a + b;
		cout << endl;
		break;
	case 2:
		cout << a - b;
		cout << endl;
		break;
	case 3:
		if (a == 0)throw runtime_error("Sorry, but you need to choose number that is bigger then 0");
		if (b == 0)throw runtime_error("Sorry, but you need to choose number that is bigger then 0");
		if (a > 0 || b > 0)
		{
			cout << a * b;
			cout << endl;
		}
		cout << endl;
		break;
	case 4:
		if (a == 0)throw runtime_error("Sorry, but you need to choose number that is bigger then 0");
		if (b == 0)throw runtime_error("Sorry, but you need to choose number that is bigger then 0");
		if(a > 0 || b > 0)
		{
			cout << a / b;
			cout << endl;
		}
		break;
	default:
		throw invalid_argument("Invalid Argument error!");
	break;
	}
	return 0;
}
int main()
{
	int a, b,step;
	
	try
	{
		Math(0, 0, 0);
	}
	catch (const runtime_error& ex)
	{
		cout <<"runtime_error:"<< ex.what();
	}
	catch (const invalid_argument& ex)
	{
		cout << "Invalid argument: " << ex.what() << endl;
	}
	catch (const exception& ex)
	{ 
		cout << "An error occurred: " << ex.what() << endl;
	}
}