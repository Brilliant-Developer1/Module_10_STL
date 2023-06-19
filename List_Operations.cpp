// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main()
{

    list<int> myList = {30, 10, 20, 50, 40};
    list<int> myList2 = {101, 102, 103};
    // myList.remove(20);

    // myList.sort(); // assanding sort
    // myList.sort(greater<int>()); // desanding sort

    // myList.unique(); // need sorted list to remove all duplicates

    // myList.reverse();

    cout << myList.front() << endl;
    cout << myList.back() << endl;
    cout << *next(myList.begin(), 2) << endl;

    // for (int value : myList)
    // {
    //     cout << value << endl;
    // }
    return 0;
}