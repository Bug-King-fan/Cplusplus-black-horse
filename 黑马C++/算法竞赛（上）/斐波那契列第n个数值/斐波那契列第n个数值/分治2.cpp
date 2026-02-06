#include<iostream>
using namespace std;

struct matrix { long m[2][2]; };
matrix A = { 1,1,1,0 };

//-----------两个矩阵相乘------------------------------
matrix one(matrix a, matrix b)
{
	matrix c;
	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			c.m[i][j] = 0;
			for (k = 0; k <= 1; k++)
			{
				c.m[i][j] += a.m[i][k] * b.m[k][j];
			}
		}
	}
	return c;
}



//-----------------------矩阵幂乘-------------
//-----------------------分治-----------------
matrix pow(matrix A, int n)
{
	matrix q, w;
	w = { 1,0,0,1 };
	q = w;
	if (n == 0)
		return q;
	else if (n == 1)
		return A;
	else if (n % 2 == 0)
		return one(pow(A, n / 2), pow(A, n / 2));
	else
		return one(one(pow(A, (n - 1) / 2), pow(A, (n - 1) / 2)), A);
}

int main()
{
	int n;
	cout << "你想求第几项？   ";
	cin >> n;
	while (n > 0)
	{
		matrix a = pow(A, n - 1);
		cout << "该项是：";
		cout << a.m[0][0];
		cout << endl;
		cout << "你想求第几项？  ";
		cin >> n;

	}
	return 0;
	system("pause");
}