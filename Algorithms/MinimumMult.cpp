/*
    Implement the Minimum Multiplications algorithm and the Print Optimal Order algorithm,
    and test them using two sets of matrices; first using the matrices in part (A); Second, using 8
    matrices of your choice.
*/


#include <iostream>

using namespace std;


int MinimumMultiplication(int a[], int n)
{

    //diagonals are 0;
    int m[n][n];            //used to store the costs (like in the table)
 
    int i, j;
    int k, L, q;
 
    // cost is zero when multiplying one matrix.
    for (i = 1; i < n; i++)
        m[i][i] = 0;
 
    // chain length (number of matrices being multiplied)
    for (L = 2; L < n; L++) 
    {
        for (i = 1; i < n - L + 1; i++) 
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++) //different values of k
            {
                // q = cost of the multiplications
                q = m[i][k] + m[k + 1][j] + a[i - 1] * a[k] * a[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
 
    return m[1][n - 1];
}

int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< "minimum number of multiplications is "<< MinimumMultiplication(arr, size)<<endl;
    return 0;
}