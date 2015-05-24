#include "Widget.h"


template <typename T>
CWidget<T>::CWidget(T data): mData(data)
{
}

template <typename T>
CWidget<T>::~CWidget(void)
{
}

template <typename T>
auto CWidget<T>::getData() -> OutTuple
{
	return std::tuple<T,int>(mData, 5);
}

