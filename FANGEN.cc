#include <vector>
#include <iostream>
using namespace std;
typedef vector<vector<char>> Matrix;
typedef vector<char> MatrixRow;
Matrix gen_fan(int degree) {
	if (degree == 1 || degree == -1)
		return Matrix(2, MatrixRow(2, '*'));
	const unsigned abs_degree = abs(degree);
	const unsigned dimension = 2 * abs_degree - 1;
	Matrix matrix(2 * abs_degree, MatrixRow(2 * abs_degree));
	const int inner_matrix_degree = degree < 0 ? degree + 1 : degree - 1;
	Matrix inner_matrix = gen_fan(inner_matrix_degree);

	// put inner matrix in center of current matrix
	unsigned col_start, row_counter, col_counter;
	col_start = row_counter = abs_degree - abs(inner_matrix_degree);
	for (auto row : inner_matrix) {
		col_counter = col_start;
		for (auto value : row)
			matrix[row_counter][col_counter++] = value;
		row_counter++;
	}

	// draw corners
	matrix[0][0] =
		matrix[0][dimension] =
			matrix[dimension][0] =
				matrix[dimension][dimension] =
					'*';

	// walking around and putting '*' and '.' s
	for (unsigned i = 1; i < dimension; ++i)
		matrix[dimension - i][0] = matrix[dimension][dimension - i] = matrix[i][dimension] = matrix[0][i] = (i >= abs_degree) ^ (degree < 0) ? '*' : '.';
	return matrix;
}

void print_fan(const Matrix &matrix){
	for (auto row : matrix) {
		for (auto value : row)
			cout << value;
		cout << endl;
	}
	cout << endl;
}

int main() {
	int fan_degree;
	while(true) {
		cin >> fan_degree;
		if (!fan_degree) break;
		print_fan(gen_fan(fan_degree));
	}
	return 0;
}
