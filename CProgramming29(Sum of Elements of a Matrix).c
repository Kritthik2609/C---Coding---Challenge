#include <stdio.h>
int main() {

int i, j, rows, cols, sum = 0;

printf("Enter the number of rows: ");
scanf("%d", &rows);

printf("Enter the number of columns: ");
scanf("%d", &cols);

int matrix[rows][cols];

printf("Enter the elements of the matrix \n");

for(i = 0; i < rows; i++) {

	for(j = 0; j < cols; j++) {
	
		scanf("%d", &matrix[i][j]);
	}
}

printf("The matrix is \n");

for(i = 0; i < rows; i++) {

	for(j = 0; j < cols; j++) {
	
		printf("%d \t", matrix[i][j]);
	}printf("\n");
}

for(i = 0; i < rows; i++) {

	for(j = 0; j < cols; j++) {
	
		sum += matrix[i][j];
	}
}

printf("The sum of the elements of the matrix is: %d \n", sum);

return 0;
}

