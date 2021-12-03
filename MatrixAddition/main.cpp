#include <iostream>

int matrix(int M[][10]);

using namespace std;

int main(void)
{
	cout << "Hello World!";
	int M[3][10];
	matrix(M);
	return 0;
}


int matrix(int M[][10])
{
	for(int i=1; i<=5;i++)
		for (int j = 1; j <= 5; j++)
		{
			M[i][j] = i * j;
			cout << M[i][j] << endl;
		}
	return 0;
}