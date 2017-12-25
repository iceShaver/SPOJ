// Date: 2017-11-20
// SPOJ: PP0602B
#include <iostream>
using namespace std;
void print_matrix(int**matrix, unsigned rows, unsigned cols);
void rotate_matrix_frame_left(int ** matrix, unsigned rows, unsigned cols)
{
	int tmp = matrix[0][0];
	for (int i = 0; i < cols-1; ++i)
		matrix[0][i] = matrix[0][i+1];
	for (int i = 0; i < rows-1; ++i)
		matrix[i][cols - 1] = matrix[i + 1][cols - 1];
	for (int i = cols - 1; i > 0; --i)
		matrix[rows - 1][i] = matrix[rows - 1][i - 1];
	for (int i = rows - 1; i > 0; --i)
		matrix[i][0] = matrix[i - 1][0];
	matrix[1][0] = tmp;
}
void print_matrix (int**matrix, unsigned rows, unsigned cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
int main(int argc, char* argv[])
{
	unsigned tests_number, rows, cols;
	int**matrix;
	cin >> tests_number;
	for (int i = 0; i < tests_number; ++i)
	{
		cin >> rows >> cols;
		matrix = new int*[rows];
		for (int i = 0; i < rows; ++i)
			matrix[i] = new int[cols];
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				cin >> matrix[i][j];
			}
		}
		rotate_matrix_frame_left(matrix, rows, cols);
		print_matrix(matrix, rows, cols);
	}
	return 0;
}
