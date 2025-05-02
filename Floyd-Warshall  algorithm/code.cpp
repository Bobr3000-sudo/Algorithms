#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main()
{
    int n;
    std::cout << "size of matrix: ";
    std::cin >> n;
    std::cout << "matrix: " << std::endl;
    std::vector<std::vector<int>> d(n, std::vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> d[i][j];
        }
    }
    std::vector<std::vector<int>> d1(n, std::vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j)
            {
                d1[i][j] = d[i][j];
            }
            else
            {
                if(d[i][j] )
            }
        }
    }

    return 0;
}
