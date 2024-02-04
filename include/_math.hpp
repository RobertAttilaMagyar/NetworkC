#pragma once
#include <vector>
#include <cstddef>

template <class T>
class Matrix
{
    private:
    std::vector<std::vector<T>> data;
    std::size_t row, col;

    public:
    Matrix(const std::size_t rows, const std::size_t cols);
    
    void print();

    T& operator()(int row, int col);

};