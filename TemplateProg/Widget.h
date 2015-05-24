#pragma once
#include <tuple>


template <typename T>
class CWidget
{
public:
	typedef std::tuple<T,int> OutTuple;

	CWidget(T data);
	~CWidget();

	OutTuple getData();
private:
	T mData;
};

