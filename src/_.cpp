#include <iostream>
using std::cout;
using std::endl;

void Usage()
{
	cout << "Usage :                                                               \n";
	cout << "Help  : -h or -help                                                   \n";
	cout << "Input : file with ._ extension                                        \n";
	cout << "Output: -o                                                            \n";
}

int main(int argc, char** argv)
{
	if (argc == 1)
	{
		Usage();
		return 0;
	}
}
