#include <iostream>

std::string (&func1(std::string (&arrS)[10]))[10]{

}

using ArrT = std::string[10];
ArrT &func2(ArrT &arr)
{

}

auto func3(ArrT &arr) -> std::string(&)[10]
{

}

std::string arrS[10];
decltype(arrS) &func4(ArrT &s)
{

}

//I pefer the second one. because it is more simpler