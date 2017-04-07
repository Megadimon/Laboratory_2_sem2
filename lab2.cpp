#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Student 
{
	char _full_name[128];
	int  _math;
	int  _rus;
	int  _phy;

public:
	Student()
	{
		_full_name[0] = _math =_rus = _phy = 0;
	}
	Student(char* full_name, int math, int rus, int phy) 
	{
		
		strncpy(_full_name, full_name, 128);
		_math = math;
		_rus = rus;
		_phy = phy;
	}
	void print()
	{
		cout << _full_name << " - " << _math << ", " << _rus << ", " << _phy;
	}
	int summ()
	{
		return _math + _rus + _phy;		
	}
	

int main() 
{
	int n = 0;
	cin >> n;

	Student* arr = new Student[n];
	cin.get();

	for (int i = 0; i < n; ++i)
	{
		char name[128] = { 0 };
		int math = 0, rus = 0, phy = 0;
		
		cin.getline(name, 128);
		cin >> math >> rus >> phy; 
		cin.get();

		arr[i] = Student(name, math, rus, phy);

		
	}

	float sum = 0;

	for (int i = 0; i < n; ++i)
	{
		arr[i].print();
		cout << endl;
		sum += arr[i].summ();
	}

	cout << endl << sum / n << endl;


	delete[] arr;
	system("pause");
	return 0;
}