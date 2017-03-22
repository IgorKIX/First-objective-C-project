#ifndef Matrix_lib_h
#define Matrix_lib_h

struct Matrix
{
private:
	int rows;
	int columns;
	int **Mat;
public:
	Matrix(int r, int c);
	void Fill();
	void Print();
	~Matrix();
};

#endif
