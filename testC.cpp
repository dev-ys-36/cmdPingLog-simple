#include <iostream>

using namespace std;

class Test
{
private:
	string addresss;
public:
	void ShowInfo(string address);
};

void Test::ShowInfo(string address)
{
	char cmd[100];
	sprintf_s(cmd, "ping %s > %s.txt", address.c_str(), address.c_str());
	system(cmd);
}

void main()
{
	string address;
	Test test;
	cout << "IP or Domain: ";
	cin >> address;
	test.ShowInfo((string)address);
}