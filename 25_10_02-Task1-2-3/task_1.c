#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
        int mat [3][3] = {{5, 4, 7},
                        {1, 3, 8},
                        {2, 9, 6}};


        int k = 0;
        int n = 3;
        
        int numbers[9];

        for(int i = 0; i < n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        numbers[k] = mat[i][j];
                        k++;
                }
        }

        sort(numbers, numbers + 9);

        k = 0;
        n = 3;
        for(int i = 0; i < n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        mat[i][j] = numbers[k];
                        k++;
                }
        }
        
        k = 0;
        n = 3;
        for(int i = 0; i < n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        cout << mat[i][j] << " ";
                }

                cout << endl;
        }

        return 0;
}
