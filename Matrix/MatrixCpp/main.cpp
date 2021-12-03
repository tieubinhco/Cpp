#include <iostream>
void create_matrix(int matrix[30][30], int R, int C);
void print_matrix(int matrix[30][30], int R, int C);


using namespace std;

int main(void)
{
    int M1[30][30];
    create_matrix(M1, 3, 3);
    print_matrix(M1, 3, 3);

    return 0;
}

void create_matrix(int matrix[30][30], int R, int C)
{
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
        {
            cout << "Enter index : " << i << "  " << j << "  :";
            cin >> matrix[i][j];
        }
}

void print_matrix(int matrix[30][30], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            /*cout << "Index : " << i << "  " << j << "  :";*/
            cout << matrix[i][j];
        }
        cout << endl;
    }
    
}

