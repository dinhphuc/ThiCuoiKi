#ifndef node_cpp
#define node_cpp
#include "node.h"
template <class T>
T node<T>::get()
{
	return data;
}
#endif