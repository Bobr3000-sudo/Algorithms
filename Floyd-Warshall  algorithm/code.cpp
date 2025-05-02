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
    std::vector<std::vector<int>> x(n, std::vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> x[i][j];
        }
    }

    return 0;
}
