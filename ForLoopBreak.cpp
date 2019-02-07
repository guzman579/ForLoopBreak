//ForLoopBreak.cpp
#include<iostream>
using namespace std;

int main()
{
	int count; // control variable also used after loop terminates

	for (count = 1; count <= 10; count++) // loop 10 times
	{
		if (count == 5)
			break; // terminates loop if count is 5

		cout << " " << count << endl;
	}

	cout << "Broke out of loop at count = " << count << endl;
	system("pause");

} // end class 
