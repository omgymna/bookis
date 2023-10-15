/*
    Implement the Minimum Multiplications algorithm and the Print Optimal Order algorithm,
    and test them using two sets of matrices; first using the matrices in part (A); Second, using 8
    matrices of your choice.
*/


#include <iostream>

using namespace std;


int MinimumMultiplication(int a[], int n)
{
    int m[n][n];    //used to store the costs (like in the table)
    int i,j;
    int k, l, q;

    //diagonals are 0;
    for(i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }

    for(l = 2; l < n; l++)
    {
        for( i = 1; i < n - l; i++)
        {
            j = i + l - 1;
            m[i][j] = INT_MAX; //set as max integer
            for(k=i; k<=j-1 ; k++)  //k values during multiplication
            {
                q = m[i][k] + m[k + 1][j] + a[i - 1] * a[k] * a[j];  //formula -> q is the cost at value k
                if (q < m[i][j])
                {
                    m[i][j] = q;
                }
            }
        }
    }

    return m[n][n-1];
}

int main()
{
    return 0;
}