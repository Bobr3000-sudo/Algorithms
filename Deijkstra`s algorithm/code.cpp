#include <iostream>
#include <vector>
#include <climits>

const int inf = 99999;

int main()
{
    int n;
    std::cout << "Number: ";
    std::cin >> n;
    std::vector<std::vector<int>> graph(n, std::vector<int>(n, inf));
    std::vector <int> distance(n, inf);
    distance[0] = 0;
    std::vector <bool> visited(n, false);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> graph[i][j];
        }
    }
    //visited[0] = true;
    for(int k = 0; k < n - 1; k++)
    {
        int position = -1;
        int min = inf;
        for(int i = 0; i < n; i++)
        {
            if (!visited[i] && distance[i] < min)
            {
                min = distance[i];
                position = i;
            }
        }
        if(position == -1)
        {
            break;
        }
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
    for(int i = 0; i < n; i++)
    {
        if (distance[i] == inf)
        {
            std::cout << i << " " << "inf" << std::endl;
        }
        else
        {
            std::cout << i << " " << distance[i] << std::endl;
        }
    }

    return 0;
}

// 0 5 6 99999 99999 99999
// 5 0 3 7 2 10
// 6 3 0 99999 7 99999
// 99999 7 99999 0 99999 2
// 99999 2 7 99999 0 4
// 99999 10 99999 2 4 0
