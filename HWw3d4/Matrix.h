#pragma once

template<class A = int>
class Matrix
{
	A** arr;
	int rows;
	int cols;
public:
	Matrix() = default;
	Matrix(int r, int c);
	Matrix(const Matrix& obj);
	~Matrix();
	friend ostream& operator<<(ostream& os, const Matrix<A>& obj) //you yourself allowed the use of Friend for cin and cout overloading
	{
		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				os << arr[i][j] << ' ';
			}
			os << endl;
		}
	} 
	Matrix<A>  operator+(int n);
	Matrix<A>  operator+(ID& obj);

	Matrix<A>  operator-(int n);
	Matrix<A>  operator-(ID& obj);

	Matrix<A>  operator*(int n);
	Matrix<A>  operator*(ID& obj);

	//matrices cannot be divided

	static int coun;
};
template<class A>
int Matrix<A>::coun = 0;
template<class A>
inline Matrix<A>::Matrix(int r, int c)
{
	coun++;
	arr** = new A[r];
	for (size_t i = 0; i < r; i++)
	{
		arr[i] = new A[c];
	}
	cout << "1 - Enter numbers\tAny - Random numbers(1-100)\n";
	int h = 0;
	cin >> h;
	switch (h)
	{
	case 1:
	{
		cout << "Enter numbers:\n";
		for (size_t i = 0; i < r; i++)
		{
			for (size_t j = 0; j < c; j++)
			{
				cout << "\nRow: " << i << " Col: " << j << endl;
				cin >> arr[i][j];
			}
		}
		break;
	}
	default:
		for (size_t i = 0; i < r; i++)
		{
			for (size_t j = 0; j < c; j++)
			{
				arr[i][j] = 1 + rand() % 100;
			}
		}
		break;
	}
}

template<class A>
inline Matrix<A>::Matrix(const Matrix& obj)
{
	arr** = new A[r];
	rows = obj.rows;
	cols = obj.cols;
	for (size_t i = 0; i < rows; i++)
	{
		arr[i] = new A[c];
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = obj.arr[i][j];
		}
	}
}

template<class A>
inline Matrix<A>::~Matrix()
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

template<class A>
inline Matrix<A> Matrix<A>::operator+(int n)
{
	Matrix<A> buff = this;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = arr[i][j] + n;
		}
	}
	return buff;
}

template<class A>
inline Matrix<A> Matrix<A>::operator-(int n)
{
	Matrix<A> buff = this;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = arr[i][j] - n;
		}
	}
	return buff;
}

template<class A>
inline Matrix<A> Matrix<A>::operator*(int n)
{
	Matrix<A> buff = this;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			arr[i][j] = arr[i][j] * n;
		}
	}
	return buff;
}




