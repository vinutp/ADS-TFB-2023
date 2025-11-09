#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
        int mat[3][3] = {{1, 3, 5},
                         {2, 6, 9},
                         {3, 6, 9}};
        
        int m = 3;             
        int n = 3;
        int size = m * n;
        int numbers[size];
        int k = 0;
        
        for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 3; j++)
                {
                        numbers[k] = mat[i][j];
                        k++;
                }
        };

        sort(numbers, numbers + size);
        
        int med = numbers[size / 2];

        cout << "Median is: " << med << endl;

        return 0;
}
