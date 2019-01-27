#include <iostream>
#include <Windows.h>
#include <thread>
#include <conio.h>
using namespace std;

void timer(int value)
{
	for (int i = value;i<=10; i++)
	{
		Sleep(1000);
		cout << i << endl;
		cout << endl;
	}
}
void dominator(int dom)
{
	cout << endl;
	if (dom == 1)
		cout << "HELLO IM DOM" << endl;
	else if (dom == 2)
		cout << "NO IM NO DOM" << endl;
	else
		cout << "NOONONONONON" << endl;
}
void main()
{
	thread t1(&timer, 2);
	thread t2(&timer, 1);
	thread t3(&dominator, 2);

	t1.join();
	t3.join();
	t2.join();

	//timer(1);
	//dominator(1);
	//dominator(2);
}