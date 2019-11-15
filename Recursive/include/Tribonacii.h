#ifndef PRACTICE_RECURSIVE_TRIBONACII_H_
#define PRACTICE_RECURSIVE_TRIBONACII_H_

namespace LeetCode
{
    namespace Recursive
    {
        class Tribonacii
        {
        private:
            int Func2Callback(const int& n, int* arr);
        public:
            int Func0(const int& n);
            int Func1(const int& n);
            int Func2(const int& n);
        };
    }
}

#endif // !PRACTICE_RECURSIVE_TRIBONACII_H_
