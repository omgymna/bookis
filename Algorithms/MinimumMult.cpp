/*
    Implement the Minimum Multiplications algorithm and the Print Optimal Order algorithm,
    and test them using two sets of matrices; first using the matrices in part (A); Second, using 8
    matrices of your choice.
*/


#include <iostream>

using namespace std;

void printOptimalParentheses(int i, int j, int n, int* p, char& name){
    
    if (i == j) 
    {
        cout << name++;
        return;
    }

    cout<<"(";

    printOptimalParentheses(i, *((p + i * n) + j), n, p, name);
    printOptimalParentheses(*((p + i * n) + j) + 1, j, n, p, name);
    cout << ")";
}

void MinimumMultiplication(int a[], int n)
{

    //diagonals are 0;
    int m[n][n];            //used to store the costs (like in the table)

    //for brackets from i to j
    int p[n][n];
 
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
                {
                    m[i][j] = q;
                    p[i][j] = k;
                }
            }
        }
    }
 
    char name = 'A';
    cout<< "Optimal parenthesis is: ";
    printOptimalParentheses(1, n-1,n,(int*)p , name);
    cout<<endl<<"Number of multiplications in optimal: "<< m[1][n-1];
    
}

int main()
{
    
    cout<< "\nFirst set of matrices:\n\n" ;

    int arr[] = {10,4,5,20,2,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    MinimumMultiplication(arr, size);

    cout<<"\n\nSecond set of matrices:\n\n";
    int a[] = {1,2,3,4,5,6,7,8} ;
    size = sizeof(a) / sizeof(a[0]);
    MinimumMultiplication(a, size);

}