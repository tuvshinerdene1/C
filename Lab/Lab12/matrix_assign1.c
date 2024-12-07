#include <stdio.h>
#include <stdlib.h>
struct Matrix
{
    int rows;      // number of rows
    int cols;      // number of columns
    double **data; // a pointer to an array of n_rows pointers to rows
};
typedef struct Matrix Matrix;

void print_matrix(Matrix *m)
{ // matrix iin element iig hewlej haruulj baina
    for (int x = 0; x < m->rows; x++)
    {
        for (int y = 0; y < m->cols; y++)
        {
            printf("%.1f ", m->data[x][y]);
        }
        printf("\n");
    }
}

Matrix *make_matrix(int n_rows, int n_cols)
{ // N, N hemjeetei matrix iig uusgej baina
    Matrix *matrix = (Matrix *)malloc(sizeof(Matrix));
    matrix->rows = n_rows;
    matrix->cols = n_cols;
    matrix->data = (double **)malloc(sizeof(double *) * n_rows);
    for (int x = 0; x < n_rows; x++)
    {
        matrix->data[x] = (double *)calloc(n_cols, sizeof(double));
    }
    return matrix;
}

Matrix *copy_matrix(double *data, int n_rows, int n_cols)
{ // massiviin ugugdluudiig matrix - d huulj baina
    Matrix *matrix = make_matrix(n_rows, n_cols);
    for (int x = 0; x < n_rows; x++)
    {
        for (int y = 0; y < n_cols; y++)
        {
            matrix->data[x][y] = data[n_cols * x + y];
        }
    }
    return matrix;
}
int get_matrix(Matrix *matrix)
{ // matrix iin elementuuded utga onooj baina6
    printf("Enter the matrix elements %dx%d", matrix->rows, matrix->cols);
    printf("\n");
    if (matrix != NULL)
    {
        for (int x = 0; x < matrix->rows; x++)
        {
            for (int y = 0; y < matrix->cols; y++)
            {
                double a;
                scanf("%lf", &a);
                matrix->data[x][y] = a;
            }
        }
    }
    else
        return 1;

    return 0;
}
Matrix *add_two_matrix(Matrix *a, Matrix *b)
{
    // 2 матрицийн нэмэх үйлдлийг хийх функцийг хэрэгжүүлэх. Ингэхдээ шинэ матриц үүсгээд түүндээ хариуг оноон, уг матрицийн хаягаа буцаана.
    if (a->cols != b->cols || a->rows != b->rows)
    {
        printf("Not possible to add 2 matrixes given!");
        exit(1);
    }

    Matrix *result = make_matrix(a->cols, a->rows);

    for (int i = 0; i < a->rows; i++)
    {
        for (int j = 0; j < a->cols; j++)
        {
            result->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    return result;

    
}
Matrix *sub_two_matrix(Matrix *a, Matrix *b)
{
    // 2 матрицийн хасах үйлдлийг хийх функцийг хэрэгжүүлэх. Ингэхдээ шинэ матриц үүсгээд түүндээ хариуг оноон, уг матрицийн хаягаа буцаана.
    if (a->cols != b->cols || a->rows != b->rows)
    {
        printf("Not possible to add 2 matrixes given!");
        exit(1);
    }

    Matrix *result = make_matrix(a->cols, a->rows);

    for (int i = 0; i < a->rows; i++)
    {
        for (int j = 0; j < a->cols; j++)
        {
            result->data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
    return result;
\
}
Matrix *mul_two_matrix(Matrix *a, Matrix *b)
{
    // 2 матрицийн үржих үйлдлийг хийх функцийг хэрэгжүүлэх. Ингэхдээ шинэ матриц үүсгээд түүндээ хариуг оноон, уг матрицийн хаягаа буцаана.
    if (a->cols != b->rows)
    {
        printf("Not possible to add 2 matrixes given!");
        exit(1);
    }

    Matrix *result = make_matrix(a->rows, b->cols);

    for (int i = 0; i < a->rows; i++)
    {
        for (int j = 0; j < b->cols; j++)
        {
            int sum = 0;
            for(int k = 0 ; k < b->rows;k++){
                sum += a->data[i][k]*b->data[k][j];
            }
            result->data[i][j] = sum;
        }
    }
    return result;
    
}
void delete_matrix(Matrix *m)
{
    // энэ функцийг хэрэгжүүлэх, тухайн матрицийн нөөцөлсөн санах ойнуудыг чөлөөлөх
    free(m);
}
int main(void)
{

    Matrix *r1;
    Matrix *m1 = make_matrix(3, 3);
    get_matrix(m1);
    Matrix *m2 = make_matrix(3, 3);
    get_matrix(m2);
    print_matrix(m1);
    print_matrix(m2);

    Matrix *(*pf)(Matrix *a, Matrix *b); // function pointer ashiglan matrix iin function uudaas songoj baina

    int c = 1;
    while (c != 0)
    {
        printf("1:add, 2:sub, 3:mul, 4: exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            pf = add_two_matrix;
            break;
        case 2:
            pf = sub_two_matrix;
            break;
        case 3:
            pf = mul_two_matrix;
            break;
        default:
            return 0;
        }
        r1 = pf(m1, m2);
        print_matrix(r1);
    }

    delete_matrix(m1);
    delete_matrix(m2);
    delete_matrix(r1);

    return 0;
}
