#include <iostream>
#include <vector>
#include <climits>

const int inf = std::numeric_limits<int>::max();

int main()
{
    int n;
    std::cout << "Numder: ";
    std::cin >> n;
    std::vector<std::vector<int>> graph(n, std::vector<int>(n, inf));
    std::vector <int> distance(n);
    std::vector <bool> visited(n, false);
    for(int i = 0; i < n; i++)
    {
        distance[i] = inf;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> graph[i][j];
        }
    }
    bool check = false;
    visited[0] = true;
    while(check)
    {
        int position = inf;
        int min = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if (!visited[i] && graph[position][i] < min)
            {
                min = distance[i];
                position = i;
            }
        }
        if(position == inf)
        {
            check = true;
            break;
        }
        else
        {
            visited[position] = true;
            for(int i = 0; i < n; i++)
            {
                if(graph[position][i] != inf && !visited[i])
                {
                    if(distance[position] + graph[position][i] < distance[i])
                    {
                        distance[i] = distance[position] + graph[position][i];
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        std::cout << i << " " << distance[i] << std::endl;
    }

    return 0;
}
