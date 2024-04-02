#include <iostream>
using namespace std;
/////**********TASK1************
//void addColumn(int**& arr, int rows, int cols, int* newCol, int position) 
//{
//    int** newArr = new int* [rows];
//    for (int i = 0; i < rows; ++i) 
//    {
//        newArr[i] = new int[cols + 1];
//    }
//    for (int i = 0; i < rows; ++i) 
//    {
//        for (int j = 0; j < cols + 1; ++j) 
//        {
//            if (j < position) {
//                newArr[i][j] = arr[i][j];
//            }
//            else if (j == position) {
//                newArr[i][j] = newCol[i];
//            }
//            else {
//                newArr[i][j] = arr[i][j - 1];
//            }
//        }
//    }
//    for (int i = 0; i < rows; ++i) 
//    {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    arr = newArr;
//}

///**********TASK2************
void deleteCol(int**& arr, int rows, int& cols, int columnDelete) 
{
    int** newArr = new int* [rows];
    for (int i = 0; i < rows; ++i) 
    {
        newArr[i] = new int[cols - 1];
    }
    for (int i = 0; i < rows; ++i) 
    {
        int newCol = 0;
        for (int j = 0; j < cols; ++j) 
        {
            if (j != columnDelete) 
            {
                newArr[i][newCol++] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < rows; ++i) 
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = newArr;
    --cols;
}
int main() {
    /////**********TASK1************
    /*int rows = 5;
    int cols = 5;
    int** myArr = new int* [rows];
    for (int i = 0; i < rows; ++i) 
    {
        myArr[i] = new int[cols];
        for (int j = 0; j < cols; ++j) 
        {
            myArr[i][j] = i * cols + j + 1;
        }
    }
    int newCol[] = { 10, 11, 12 };
    int position = 1;
    addColumn(myArr, rows, cols, newCol, position);
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols + 1; ++j) 
        {
            cout << myArr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) 
    {
        delete[] myArr[i];
    }
    delete[] myArr;*/


    ///T******************************TASK2**************************************
    int rows = 3;
    int cols = 3;
    int** myArr = new int* [rows];
    for (int i = 0; i < rows; ++i) 
    {
        myArr[i] = new int[cols];
        for (int j = 0; j < cols; ++j) 
        {
            myArr[i][j] = i * cols + j + 1;
        }
    }

    int columnDelete = 1;

    deleteCol(myArr, rows, cols, columnDelete);
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << myArr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) 
    {
        delete[] myArr[i];
    }
    delete[] myArr;

    ///далі дороблю
}
