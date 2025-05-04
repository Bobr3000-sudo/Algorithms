#include <iostream>
#include <vector>
#include <limits>

const int i = std::numeric_limits<int>::max();

int main()
{
    int n;
    std::cout << "Numder: ";
    std::cin >> n;
    std::vector<std::vector<int>> graph(n, std::vector<int>(n, i));
    std::vector <int> distance(n);
    std::vector <bool> visited(n, false);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> graph[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> graph[i][j];
        }
    }
    return 0;
}
