// Example program
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std; 

int main()
{
	//bool done = false; 
	//time_t start = time(0);

	//time_t end = 0;

	//while (!done)
	//{
	//	if (end - start > .5)
	//	{
	//		cout << "HELLO" << endl; 
	//		start = time(0);
	//	}
	//	else
	//	{
	//		end = time(0);
	//	}
	//	
	//}
	// 

	vector<int> nums = { 1, 3, 7, 4 , 11, 2, 0, 9, 22};


	for (int i = 0; i < nums.size(); i++)
	{
		if (nums.at(i) % 2 == 0)
		{
			nums.erase(nums.begin() + i);
		}
		cout << i <<  endl; ;
	}
	cout << endl << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums.at(i)<<endl;
	}



}
