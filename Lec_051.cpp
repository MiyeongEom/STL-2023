#include <iostream>
#include <algorithm>
#include "String.h"
using namespace std;

template <class 반복자, class 찾을값>
반복자 my_find(반복자 beg, 반복자 end, 찾을값 val)
{
    for (; beg != end; ++beg)
        if (*beg == val)
            return beg;
    return end;
}

//while (beg != end) {
//    if (*beg == val) {
//        return beg;
//    }
//    ++beg;
//   }
//   return beg;
//}

int main()
{
    String s{ "The quick brown fox jumps over the lazy dog" };

    // [문제] 사용자가 입력한 문자가 s에 있는지, 있다면 어느 위치에 있는가?

    while (true) {
        cout << "찾을 문자는 ? :";
        char c;
        cin >> c;

        auto p = my_find(s.begin(), s.end(), c);
        if (p == s.end())
            cout << "없어" << endl;
        else
            cout << distance(s.begin(), p) + 1 << "번째 문자입니다" << endl;
    }

}