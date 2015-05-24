#include <iostream>
#include "Widget.h"
#include "Widget.cpp"
using namespace std;


int main()
{
	CWidget<int> w(12);

	auto t = w.getData();

	cout << std::get<0>(t) << endl;
}