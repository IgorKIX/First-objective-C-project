#include"Matrix_lib.h"
#include<iostream>
using namespace std;

Matrix::Matrix(int r, int c)
{
	rows = r;
	columns = c;
	Mat=new int *[columns];
	for (int i = 0; i < rows; ++i)
	{
		Mat[i] = new int[rows];
	}
}
Matrix::~Matrix()
{
	for (int i = 0; i < rows; ++i)
	{
		delete[] Mat[i];
	}
	delete[] Mat;
}
void Matrix::Fill()
{
	cout << "Fill the array" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = i; j < columns; i++)
		{
			cout <<"Fill the "<<i<<" row of a "<<j<<" collumn: ";
			cin >> Mat[i][j];
			cout << endl;
		}
	}
}
void Matrix::Print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = i; j < columns; i++)
		{
			cout << Mat[i][j] << endl;
		}
	}
}