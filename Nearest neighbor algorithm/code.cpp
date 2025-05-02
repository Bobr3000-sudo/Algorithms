#include <iostream>
#include <vector>
#include <climits>

int main()
{
    // 0 14 15 18 13
    // 14 0 10 11 13
    // 15 10 0 12 14
    // 18 11 12 0 17
    // 13 13 14 17 0


    //66
    int n;
    std::cout << "size of matrix: ";
    std::cin >> n;
    std::cout << "start element: ";
    int m;
    std::cin >> m;
    int m1 = m;
    std::cout << "matrix: " << std::endl;
    std::vector<std::vector<int>> x(n, std::vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> x[i][j];
        }
    }
    bool check = true;
    int count = 0;
    std::vector<bool> visit(n, false);
    visit[m] = true;
    while (check)
    {
        int position = -1;
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (!visit[i] && x[m][i] < min)
            {
                min = x[m][i];
                position = i;
            }
        }
        if (position == -1)
        {
            check = false;
            break;
        }
        m = position;
        visit[m] = true;
        count += min;
    }
    count = count + x[m][m1];
    std::cout << count;
    return 0;
}
