#include <iostream>
#include <climits>

using namespace std;

void new_func1(void)
{
	cout << " Inside new_func1 ";
	for(int i = 0; i < INT_MAX; i++);
	return;
};

void func1(void)
{
	cout << " Inside func1 ";
	for(int i = 0; i < INT_MAX; i++);
	new_func1();
	return;
}

void func2(void)
{
	cout << " Inside func2 ";
	for(int i = 0; i < INT_MAX; i++);
	return;
}

int main(void)
{
	cout << " Inside main ";
	for(int i = 0; i < INT_MAX; i++);
	func1();
	func2();

	return 0;
}
