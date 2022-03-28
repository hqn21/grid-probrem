#include <iostream>
#include <stdlib.h>

using namespace std;

int map[7][7];

int howMany = 0;

int tryTime = 0;

void show()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (map[i][j] == 1)
            {
                cout << " " << map[i][j] << " ";
            }
            else
            {
                cout << map[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "已嘗試 " << tryTime << " 次檢查。" << endl;
    cout << "目前總共有 " << howMany << " 組符合條件。" << endl;
}

void init()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            map[i][j] = 1;
        }
    }
}

void check()
{
    int wrong = 0;
    int total;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            total = 1;
            if ((i - 1) >= 0)
            {
                total = total * map[i - 1][j];
            }
            if ((i + 1) <= 6)
            {
                total = total * map[i + 1][j];
            }
            if ((j - 1) >= 0)
            {
                total = total * map[i][j - 1];
            }
            if ((j + 1) <= 6)
            {
                total = total * map[i][j + 1];
            }
            if (total != map[i][j])
            {
                wrong++;
                break;
                break;
            }
        }
    }
    tryTime++;
    if (!wrong)
    {
        howMany++;
    }
}

// int main() {
//     init();
//     check();
//     show();
//     for(int a = 0; a < 49; a++) {
//         system("clear");
//         init();
//         map[a/7][a%7] = -1;
//         check();
//         show();
//     }

//     for(int a = 0; a < 49; a++) {
//         for(int b = 0; b < a; b++) {
//             system("clear");
//             init();
//             map[a/7][a%7] = -1;
//             map[a/7][a%7] = -1;
//             check();
//             show();
//         }
//     }

//     for(int a = 0; a < 49; a++) {
//         for(int b = 0; b < a; b++) {
//             for(int c = 0; c < b; c++) {
//                 system("clear");
//                 init();
//                 map[a/7][a%7] = -1;
//                 map[b/7][b%7] = -1;
//                 map[c/7][c%7] = -1;
//                 check();
//                 show();
//             }
//         }
//     }
// 	return 0;
// }

int main()
{
    init();
    check();
    show();
    for (int a = 0; a < 49; a++)
    {
        system("clear");
        init();
        map[a / 7][a % 7] = -1;
        check();
        show();
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            system("clear");
            init();
            map[a / 7][a % 7] = -1;
            map[b / 7][b % 7] = -1;
            check();
            show();
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                system("clear");
                init();
                map[a / 7][a % 7] = -1;
                map[b / 7][b % 7] = -1;
                map[c / 7][c % 7] = -1;
                check();
                show();
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    system("clear");
                    init();
                    map[a / 7][a % 7] = -1;
                    map[b / 7][b % 7] = -1;
                    map[c / 7][c % 7] = -1;
                    map[d / 7][d % 7] = -1;
                    check();
                    show();
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        system("clear");
                        init();
                        map[a / 7][a % 7] = -1;
                        map[b / 7][b % 7] = -1;
                        map[c / 7][c % 7] = -1;
                        map[d / 7][d % 7] = -1;
                        map[e / 7][e % 7] = -1;
                        check();
                        show();
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            system("clear");
                            init();
                            map[a / 7][a % 7] = -1;
                            map[b / 7][b % 7] = -1;
                            map[c / 7][c % 7] = -1;
                            map[d / 7][d % 7] = -1;
                            map[e / 7][e % 7] = -1;
                            map[f / 7][f % 7] = -1;
                            check();
                            show();
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                system("clear");
                                init();
                                map[a / 7][a % 7] = -1;
                                map[b / 7][b % 7] = -1;
                                map[c / 7][c % 7] = -1;
                                map[d / 7][d % 7] = -1;
                                map[e / 7][e % 7] = -1;
                                map[f / 7][f % 7] = -1;
                                map[g / 7][g % 7] = -1;
                                check();
                                show();
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    system("clear");
                                    init();
                                    map[a / 7][a % 7] = -1;
                                    map[b / 7][b % 7] = -1;
                                    map[c / 7][c % 7] = -1;
                                    map[d / 7][d % 7] = -1;
                                    map[e / 7][e % 7] = -1;
                                    map[f / 7][f % 7] = -1;
                                    map[g / 7][g % 7] = -1;
                                    map[h / 7][h % 7] = -1;
                                    check();
                                    show();
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        system("clear");
                                        init();
                                        map[a / 7][a % 7] = -1;
                                        map[b / 7][b % 7] = -1;
                                        map[c / 7][c % 7] = -1;
                                        map[d / 7][d % 7] = -1;
                                        map[e / 7][e % 7] = -1;
                                        map[f / 7][f % 7] = -1;
                                        map[g / 7][g % 7] = -1;
                                        map[h / 7][h % 7] = -1;
                                        map[i / 7][i % 7] = -1;
                                        check();
                                        show();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            system("clear");
                                            init();
                                            map[a / 7][a % 7] = -1;
                                            map[b / 7][b % 7] = -1;
                                            map[c / 7][c % 7] = -1;
                                            map[d / 7][d % 7] = -1;
                                            map[e / 7][e % 7] = -1;
                                            map[f / 7][f % 7] = -1;
                                            map[g / 7][g % 7] = -1;
                                            map[h / 7][h % 7] = -1;
                                            map[i / 7][i % 7] = -1;
                                            map[j / 7][j % 7] = -1;
                                            check();
                                            show();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                system("clear");
                                                init();
                                                map[a / 7][a % 7] = -1;
                                                map[b / 7][b % 7] = -1;
                                                map[c / 7][c % 7] = -1;
                                                map[d / 7][d % 7] = -1;
                                                map[e / 7][e % 7] = -1;
                                                map[f / 7][f % 7] = -1;
                                                map[g / 7][g % 7] = -1;
                                                map[h / 7][h % 7] = -1;
                                                map[i / 7][i % 7] = -1;
                                                map[j / 7][j % 7] = -1;
                                                map[k / 7][k % 7] = -1;
                                                check();
                                                show();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    system("clear");
                                                    init();
                                                    map[a / 7][a % 7] = -1;
                                                    map[b / 7][b % 7] = -1;
                                                    map[c / 7][c % 7] = -1;
                                                    map[d / 7][d % 7] = -1;
                                                    map[e / 7][e % 7] = -1;
                                                    map[f / 7][f % 7] = -1;
                                                    map[g / 7][g % 7] = -1;
                                                    map[h / 7][h % 7] = -1;
                                                    map[i / 7][i % 7] = -1;
                                                    map[j / 7][j % 7] = -1;
                                                    map[k / 7][k % 7] = -1;
                                                    map[l / 7][l % 7] = -1;
                                                    check();
                                                    show();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        system("clear");
                                                        init();
                                                        map[a / 7][a % 7] = -1;
                                                        map[b / 7][b % 7] = -1;
                                                        map[c / 7][c % 7] = -1;
                                                        map[d / 7][d % 7] = -1;
                                                        map[e / 7][e % 7] = -1;
                                                        map[f / 7][f % 7] = -1;
                                                        map[g / 7][g % 7] = -1;
                                                        map[h / 7][h % 7] = -1;
                                                        map[i / 7][i % 7] = -1;
                                                        map[j / 7][j % 7] = -1;
                                                        map[k / 7][k % 7] = -1;
                                                        map[l / 7][l % 7] = -1;
                                                        map[m / 7][m % 7] = -1;
                                                        check();
                                                        show();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            system("clear");
                                                            init();
                                                            map[a / 7][a % 7] = -1;
                                                            map[b / 7][b % 7] = -1;
                                                            map[c / 7][c % 7] = -1;
                                                            map[d / 7][d % 7] = -1;
                                                            map[e / 7][e % 7] = -1;
                                                            map[f / 7][f % 7] = -1;
                                                            map[g / 7][g % 7] = -1;
                                                            map[h / 7][h % 7] = -1;
                                                            map[i / 7][i % 7] = -1;
                                                            map[j / 7][j % 7] = -1;
                                                            map[k / 7][k % 7] = -1;
                                                            map[l / 7][l % 7] = -1;
                                                            map[m / 7][m % 7] = -1;
                                                            map[n / 7][n % 7] = -1;
                                                            check();
                                                            show();
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                system("clear");
                                                                init();
                                                                map[a / 7][a % 7] = -1;
                                                                map[b / 7][b % 7] = -1;
                                                                map[c / 7][c % 7] = -1;
                                                                map[d / 7][d % 7] = -1;
                                                                map[e / 7][e % 7] = -1;
                                                                map[f / 7][f % 7] = -1;
                                                                map[g / 7][g % 7] = -1;
                                                                map[h / 7][h % 7] = -1;
                                                                map[i / 7][i % 7] = -1;
                                                                map[j / 7][j % 7] = -1;
                                                                map[k / 7][k % 7] = -1;
                                                                map[l / 7][l % 7] = -1;
                                                                map[m / 7][m % 7] = -1;
                                                                map[n / 7][n % 7] = -1;
                                                                map[o / 7][o % 7] = -1;
                                                                check();
                                                                show();
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    system("clear");
                                                                    init();
                                                                    map[a / 7][a % 7] = -1;
                                                                    map[b / 7][b % 7] = -1;
                                                                    map[c / 7][c % 7] = -1;
                                                                    map[d / 7][d % 7] = -1;
                                                                    map[e / 7][e % 7] = -1;
                                                                    map[f / 7][f % 7] = -1;
                                                                    map[g / 7][g % 7] = -1;
                                                                    map[h / 7][h % 7] = -1;
                                                                    map[i / 7][i % 7] = -1;
                                                                    map[j / 7][j % 7] = -1;
                                                                    map[k / 7][k % 7] = -1;
                                                                    map[l / 7][l % 7] = -1;
                                                                    map[m / 7][m % 7] = -1;
                                                                    map[n / 7][n % 7] = -1;
                                                                    map[o / 7][o % 7] = -1;
                                                                    map[p / 7][p % 7] = -1;
                                                                    check();
                                                                    show();
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        system("clear");
                                                                        init();
                                                                        map[a / 7][a % 7] = -1;
                                                                        map[b / 7][b % 7] = -1;
                                                                        map[c / 7][c % 7] = -1;
                                                                        map[d / 7][d % 7] = -1;
                                                                        map[e / 7][e % 7] = -1;
                                                                        map[f / 7][f % 7] = -1;
                                                                        map[g / 7][g % 7] = -1;
                                                                        map[h / 7][h % 7] = -1;
                                                                        map[i / 7][i % 7] = -1;
                                                                        map[j / 7][j % 7] = -1;
                                                                        map[k / 7][k % 7] = -1;
                                                                        map[l / 7][l % 7] = -1;
                                                                        map[m / 7][m % 7] = -1;
                                                                        map[n / 7][n % 7] = -1;
                                                                        map[o / 7][o % 7] = -1;
                                                                        map[p / 7][p % 7] = -1;
                                                                        map[q / 7][q % 7] = -1;
                                                                        check();
                                                                        show();
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            system("clear");
                                                                            init();
                                                                            map[a / 7][a % 7] = -1;
                                                                            map[b / 7][b % 7] = -1;
                                                                            map[c / 7][c % 7] = -1;
                                                                            map[d / 7][d % 7] = -1;
                                                                            map[e / 7][e % 7] = -1;
                                                                            map[f / 7][f % 7] = -1;
                                                                            map[g / 7][g % 7] = -1;
                                                                            map[h / 7][h % 7] = -1;
                                                                            map[i / 7][i % 7] = -1;
                                                                            map[j / 7][j % 7] = -1;
                                                                            map[k / 7][k % 7] = -1;
                                                                            map[l / 7][l % 7] = -1;
                                                                            map[m / 7][m % 7] = -1;
                                                                            map[n / 7][n % 7] = -1;
                                                                            map[o / 7][o % 7] = -1;
                                                                            map[p / 7][p % 7] = -1;
                                                                            map[q / 7][q % 7] = -1;
                                                                            map[r / 7][r % 7] = -1;
                                                                            check();
                                                                            show();
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                system("clear");
                                                                                init();
                                                                                map[a / 7][a % 7] = -1;
                                                                                map[b / 7][b % 7] = -1;
                                                                                map[c / 7][c % 7] = -1;
                                                                                map[d / 7][d % 7] = -1;
                                                                                map[e / 7][e % 7] = -1;
                                                                                map[f / 7][f % 7] = -1;
                                                                                map[g / 7][g % 7] = -1;
                                                                                map[h / 7][h % 7] = -1;
                                                                                map[i / 7][i % 7] = -1;
                                                                                map[j / 7][j % 7] = -1;
                                                                                map[k / 7][k % 7] = -1;
                                                                                map[l / 7][l % 7] = -1;
                                                                                map[m / 7][m % 7] = -1;
                                                                                map[n / 7][n % 7] = -1;
                                                                                map[o / 7][o % 7] = -1;
                                                                                map[p / 7][p % 7] = -1;
                                                                                map[q / 7][q % 7] = -1;
                                                                                map[r / 7][r % 7] = -1;
                                                                                map[s / 7][s % 7] = -1;
                                                                                check();
                                                                                show();
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    system("clear");
                                                                                    init();
                                                                                    map[a / 7][a % 7] = -1;
                                                                                    map[b / 7][b % 7] = -1;
                                                                                    map[c / 7][c % 7] = -1;
                                                                                    map[d / 7][d % 7] = -1;
                                                                                    map[e / 7][e % 7] = -1;
                                                                                    map[f / 7][f % 7] = -1;
                                                                                    map[g / 7][g % 7] = -1;
                                                                                    map[h / 7][h % 7] = -1;
                                                                                    map[i / 7][i % 7] = -1;
                                                                                    map[j / 7][j % 7] = -1;
                                                                                    map[k / 7][k % 7] = -1;
                                                                                    map[l / 7][l % 7] = -1;
                                                                                    map[m / 7][m % 7] = -1;
                                                                                    map[n / 7][n % 7] = -1;
                                                                                    map[o / 7][o % 7] = -1;
                                                                                    map[p / 7][p % 7] = -1;
                                                                                    map[q / 7][q % 7] = -1;
                                                                                    map[r / 7][r % 7] = -1;
                                                                                    map[s / 7][s % 7] = -1;
                                                                                    map[t / 7][t % 7] = -1;
                                                                                    check();
                                                                                    show();
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        system("clear");
                                                                                        init();
                                                                                        map[a / 7][a % 7] = -1;
                                                                                        map[b / 7][b % 7] = -1;
                                                                                        map[c / 7][c % 7] = -1;
                                                                                        map[d / 7][d % 7] = -1;
                                                                                        map[e / 7][e % 7] = -1;
                                                                                        map[f / 7][f % 7] = -1;
                                                                                        map[g / 7][g % 7] = -1;
                                                                                        map[h / 7][h % 7] = -1;
                                                                                        map[i / 7][i % 7] = -1;
                                                                                        map[j / 7][j % 7] = -1;
                                                                                        map[k / 7][k % 7] = -1;
                                                                                        map[l / 7][l % 7] = -1;
                                                                                        map[m / 7][m % 7] = -1;
                                                                                        map[n / 7][n % 7] = -1;
                                                                                        map[o / 7][o % 7] = -1;
                                                                                        map[p / 7][p % 7] = -1;
                                                                                        map[q / 7][q % 7] = -1;
                                                                                        map[r / 7][r % 7] = -1;
                                                                                        map[s / 7][s % 7] = -1;
                                                                                        map[t / 7][t % 7] = -1;
                                                                                        map[u / 7][u % 7] = -1;
                                                                                        check();
                                                                                        show();
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            system("clear");
                                                                                            init();
                                                                                            map[a / 7][a % 7] = -1;
                                                                                            map[b / 7][b % 7] = -1;
                                                                                            map[c / 7][c % 7] = -1;
                                                                                            map[d / 7][d % 7] = -1;
                                                                                            map[e / 7][e % 7] = -1;
                                                                                            map[f / 7][f % 7] = -1;
                                                                                            map[g / 7][g % 7] = -1;
                                                                                            map[h / 7][h % 7] = -1;
                                                                                            map[i / 7][i % 7] = -1;
                                                                                            map[j / 7][j % 7] = -1;
                                                                                            map[k / 7][k % 7] = -1;
                                                                                            map[l / 7][l % 7] = -1;
                                                                                            map[m / 7][m % 7] = -1;
                                                                                            map[n / 7][n % 7] = -1;
                                                                                            map[o / 7][o % 7] = -1;
                                                                                            map[p / 7][p % 7] = -1;
                                                                                            map[q / 7][q % 7] = -1;
                                                                                            map[r / 7][r % 7] = -1;
                                                                                            map[s / 7][s % 7] = -1;
                                                                                            map[t / 7][t % 7] = -1;
                                                                                            map[u / 7][u % 7] = -1;
                                                                                            map[v / 7][v % 7] = -1;
                                                                                            check();
                                                                                            show();
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                system("clear");
                                                                                                init();
                                                                                                map[a / 7][a % 7] = -1;
                                                                                                map[b / 7][b % 7] = -1;
                                                                                                map[c / 7][c % 7] = -1;
                                                                                                map[d / 7][d % 7] = -1;
                                                                                                map[e / 7][e % 7] = -1;
                                                                                                map[f / 7][f % 7] = -1;
                                                                                                map[g / 7][g % 7] = -1;
                                                                                                map[h / 7][h % 7] = -1;
                                                                                                map[i / 7][i % 7] = -1;
                                                                                                map[j / 7][j % 7] = -1;
                                                                                                map[k / 7][k % 7] = -1;
                                                                                                map[l / 7][l % 7] = -1;
                                                                                                map[m / 7][m % 7] = -1;
                                                                                                map[n / 7][n % 7] = -1;
                                                                                                map[o / 7][o % 7] = -1;
                                                                                                map[p / 7][p % 7] = -1;
                                                                                                map[q / 7][q % 7] = -1;
                                                                                                map[r / 7][r % 7] = -1;
                                                                                                map[s / 7][s % 7] = -1;
                                                                                                map[t / 7][t % 7] = -1;
                                                                                                map[u / 7][u % 7] = -1;
                                                                                                map[v / 7][v % 7] = -1;
                                                                                                map[w / 7][w % 7] = -1;
                                                                                                check();
                                                                                                show();
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    system("clear");
                                                                                                    init();
                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                    check();
                                                                                                    show();
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        system("clear");
                                                                                                        init();
                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                        check();
                                                                                                        show();
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            system("clear");
                                                                                                            init();
                                                                                                            map[a / 7][a % 7] = -1;
                                                                                                            map[b / 7][b % 7] = -1;
                                                                                                            map[c / 7][c % 7] = -1;
                                                                                                            map[d / 7][d % 7] = -1;
                                                                                                            map[e / 7][e % 7] = -1;
                                                                                                            map[f / 7][f % 7] = -1;
                                                                                                            map[g / 7][g % 7] = -1;
                                                                                                            map[h / 7][h % 7] = -1;
                                                                                                            map[i / 7][i % 7] = -1;
                                                                                                            map[j / 7][j % 7] = -1;
                                                                                                            map[k / 7][k % 7] = -1;
                                                                                                            map[l / 7][l % 7] = -1;
                                                                                                            map[m / 7][m % 7] = -1;
                                                                                                            map[n / 7][n % 7] = -1;
                                                                                                            map[o / 7][o % 7] = -1;
                                                                                                            map[p / 7][p % 7] = -1;
                                                                                                            map[q / 7][q % 7] = -1;
                                                                                                            map[r / 7][r % 7] = -1;
                                                                                                            map[s / 7][s % 7] = -1;
                                                                                                            map[t / 7][t % 7] = -1;
                                                                                                            map[u / 7][u % 7] = -1;
                                                                                                            map[v / 7][v % 7] = -1;
                                                                                                            map[w / 7][w % 7] = -1;
                                                                                                            map[x / 7][x % 7] = -1;
                                                                                                            map[y / 7][y % 7] = -1;
                                                                                                            map[z / 7][z % 7] = -1;
                                                                                                            check();
                                                                                                            show();
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                system("clear");
                                                                                                                init();
                                                                                                                map[a / 7][a % 7] = -1;
                                                                                                                map[b / 7][b % 7] = -1;
                                                                                                                map[c / 7][c % 7] = -1;
                                                                                                                map[d / 7][d % 7] = -1;
                                                                                                                map[e / 7][e % 7] = -1;
                                                                                                                map[f / 7][f % 7] = -1;
                                                                                                                map[g / 7][g % 7] = -1;
                                                                                                                map[h / 7][h % 7] = -1;
                                                                                                                map[i / 7][i % 7] = -1;
                                                                                                                map[j / 7][j % 7] = -1;
                                                                                                                map[k / 7][k % 7] = -1;
                                                                                                                map[l / 7][l % 7] = -1;
                                                                                                                map[m / 7][m % 7] = -1;
                                                                                                                map[n / 7][n % 7] = -1;
                                                                                                                map[o / 7][o % 7] = -1;
                                                                                                                map[p / 7][p % 7] = -1;
                                                                                                                map[q / 7][q % 7] = -1;
                                                                                                                map[r / 7][r % 7] = -1;
                                                                                                                map[s / 7][s % 7] = -1;
                                                                                                                map[t / 7][t % 7] = -1;
                                                                                                                map[u / 7][u % 7] = -1;
                                                                                                                map[v / 7][v % 7] = -1;
                                                                                                                map[w / 7][w % 7] = -1;
                                                                                                                map[x / 7][x % 7] = -1;
                                                                                                                map[y / 7][y % 7] = -1;
                                                                                                                map[z / 7][z % 7] = -1;
                                                                                                                map[aa / 7][aa % 7] = -1;
                                                                                                                check();
                                                                                                                show();
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    system("clear");
                                                                                                                    init();
                                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                                    map[y / 7][y % 7] = -1;
                                                                                                                    map[z / 7][z % 7] = -1;
                                                                                                                    map[aa / 7][aa % 7] = -1;
                                                                                                                    map[bb / 7][bb % 7] = -1;
                                                                                                                    check();
                                                                                                                    show();
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        system("clear");
                                                                                                                        init();
                                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                                        map[z / 7][z % 7] = -1;
                                                                                                                        map[aa / 7][aa % 7] = -1;
                                                                                                                        map[bb / 7][bb % 7] = -1;
                                                                                                                        map[cc / 7][cc % 7] = -1;
                                                                                                                        check();
                                                                                                                        show();
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            system("clear");
                                                                                                                            init();
                                                                                                                            map[a / 7][a % 7] = -1;
                                                                                                                            map[b / 7][b % 7] = -1;
                                                                                                                            map[c / 7][c % 7] = -1;
                                                                                                                            map[d / 7][d % 7] = -1;
                                                                                                                            map[e / 7][e % 7] = -1;
                                                                                                                            map[f / 7][f % 7] = -1;
                                                                                                                            map[g / 7][g % 7] = -1;
                                                                                                                            map[h / 7][h % 7] = -1;
                                                                                                                            map[i / 7][i % 7] = -1;
                                                                                                                            map[j / 7][j % 7] = -1;
                                                                                                                            map[k / 7][k % 7] = -1;
                                                                                                                            map[l / 7][l % 7] = -1;
                                                                                                                            map[m / 7][m % 7] = -1;
                                                                                                                            map[n / 7][n % 7] = -1;
                                                                                                                            map[o / 7][o % 7] = -1;
                                                                                                                            map[p / 7][p % 7] = -1;
                                                                                                                            map[q / 7][q % 7] = -1;
                                                                                                                            map[r / 7][r % 7] = -1;
                                                                                                                            map[s / 7][s % 7] = -1;
                                                                                                                            map[t / 7][t % 7] = -1;
                                                                                                                            map[u / 7][u % 7] = -1;
                                                                                                                            map[v / 7][v % 7] = -1;
                                                                                                                            map[w / 7][w % 7] = -1;
                                                                                                                            map[x / 7][x % 7] = -1;
                                                                                                                            map[y / 7][y % 7] = -1;
                                                                                                                            map[z / 7][z % 7] = -1;
                                                                                                                            map[aa / 7][aa % 7] = -1;
                                                                                                                            map[bb / 7][bb % 7] = -1;
                                                                                                                            map[cc / 7][cc % 7] = -1;
                                                                                                                            map[dd / 7][dd % 7] = -1;
                                                                                                                            check();
                                                                                                                            show();
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                system("clear");
                                                                                                                                init();
                                                                                                                                map[a / 7][a % 7] = -1;
                                                                                                                                map[b / 7][b % 7] = -1;
                                                                                                                                map[c / 7][c % 7] = -1;
                                                                                                                                map[d / 7][d % 7] = -1;
                                                                                                                                map[e / 7][e % 7] = -1;
                                                                                                                                map[f / 7][f % 7] = -1;
                                                                                                                                map[g / 7][g % 7] = -1;
                                                                                                                                map[h / 7][h % 7] = -1;
                                                                                                                                map[i / 7][i % 7] = -1;
                                                                                                                                map[j / 7][j % 7] = -1;
                                                                                                                                map[k / 7][k % 7] = -1;
                                                                                                                                map[l / 7][l % 7] = -1;
                                                                                                                                map[m / 7][m % 7] = -1;
                                                                                                                                map[n / 7][n % 7] = -1;
                                                                                                                                map[o / 7][o % 7] = -1;
                                                                                                                                map[p / 7][p % 7] = -1;
                                                                                                                                map[q / 7][q % 7] = -1;
                                                                                                                                map[r / 7][r % 7] = -1;
                                                                                                                                map[s / 7][s % 7] = -1;
                                                                                                                                map[t / 7][t % 7] = -1;
                                                                                                                                map[u / 7][u % 7] = -1;
                                                                                                                                map[v / 7][v % 7] = -1;
                                                                                                                                map[w / 7][w % 7] = -1;
                                                                                                                                map[x / 7][x % 7] = -1;
                                                                                                                                map[y / 7][y % 7] = -1;
                                                                                                                                map[z / 7][z % 7] = -1;
                                                                                                                                map[aa / 7][aa % 7] = -1;
                                                                                                                                map[bb / 7][bb % 7] = -1;
                                                                                                                                map[cc / 7][cc % 7] = -1;
                                                                                                                                map[dd / 7][dd % 7] = -1;
                                                                                                                                map[ee / 7][ee % 7] = -1;
                                                                                                                                check();
                                                                                                                                show();
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    system("clear");
                                                                                                                                    init();
                                                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                                                    map[y / 7][y % 7] = -1;
                                                                                                                                    map[z / 7][z % 7] = -1;
                                                                                                                                    map[aa / 7][aa % 7] = -1;
                                                                                                                                    map[bb / 7][bb % 7] = -1;
                                                                                                                                    map[cc / 7][cc % 7] = -1;
                                                                                                                                    map[dd / 7][dd % 7] = -1;
                                                                                                                                    map[ee / 7][ee % 7] = -1;
                                                                                                                                    map[ff / 7][ff % 7] = -1;
                                                                                                                                    check();
                                                                                                                                    show();
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        system("clear");
                                                                                                                                        init();
                                                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                                                        map[z / 7][z % 7] = -1;
                                                                                                                                        map[aa / 7][aa % 7] = -1;
                                                                                                                                        map[bb / 7][bb % 7] = -1;
                                                                                                                                        map[cc / 7][cc % 7] = -1;
                                                                                                                                        map[dd / 7][dd % 7] = -1;
                                                                                                                                        map[ee / 7][ee % 7] = -1;
                                                                                                                                        map[ff / 7][ff % 7] = -1;
                                                                                                                                        map[gg / 7][gg % 7] = -1;
                                                                                                                                        check();
                                                                                                                                        show();
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            system("clear");
                                                                                                                                            init();
                                                                                                                                            map[a / 7][a % 7] = -1;
                                                                                                                                            map[b / 7][b % 7] = -1;
                                                                                                                                            map[c / 7][c % 7] = -1;
                                                                                                                                            map[d / 7][d % 7] = -1;
                                                                                                                                            map[e / 7][e % 7] = -1;
                                                                                                                                            map[f / 7][f % 7] = -1;
                                                                                                                                            map[g / 7][g % 7] = -1;
                                                                                                                                            map[h / 7][h % 7] = -1;
                                                                                                                                            map[i / 7][i % 7] = -1;
                                                                                                                                            map[j / 7][j % 7] = -1;
                                                                                                                                            map[k / 7][k % 7] = -1;
                                                                                                                                            map[l / 7][l % 7] = -1;
                                                                                                                                            map[m / 7][m % 7] = -1;
                                                                                                                                            map[n / 7][n % 7] = -1;
                                                                                                                                            map[o / 7][o % 7] = -1;
                                                                                                                                            map[p / 7][p % 7] = -1;
                                                                                                                                            map[q / 7][q % 7] = -1;
                                                                                                                                            map[r / 7][r % 7] = -1;
                                                                                                                                            map[s / 7][s % 7] = -1;
                                                                                                                                            map[t / 7][t % 7] = -1;
                                                                                                                                            map[u / 7][u % 7] = -1;
                                                                                                                                            map[v / 7][v % 7] = -1;
                                                                                                                                            map[w / 7][w % 7] = -1;
                                                                                                                                            map[x / 7][x % 7] = -1;
                                                                                                                                            map[y / 7][y % 7] = -1;
                                                                                                                                            map[z / 7][z % 7] = -1;
                                                                                                                                            map[aa / 7][aa % 7] = -1;
                                                                                                                                            map[bb / 7][bb % 7] = -1;
                                                                                                                                            map[cc / 7][cc % 7] = -1;
                                                                                                                                            map[dd / 7][dd % 7] = -1;
                                                                                                                                            map[ee / 7][ee % 7] = -1;
                                                                                                                                            map[ff / 7][ff % 7] = -1;
                                                                                                                                            map[gg / 7][gg % 7] = -1;
                                                                                                                                            map[hh / 7][hh % 7] = -1;
                                                                                                                                            check();
                                                                                                                                            show();
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                system("clear");
                                                                                                                                                init();
                                                                                                                                                map[a / 7][a % 7] = -1;
                                                                                                                                                map[b / 7][b % 7] = -1;
                                                                                                                                                map[c / 7][c % 7] = -1;
                                                                                                                                                map[d / 7][d % 7] = -1;
                                                                                                                                                map[e / 7][e % 7] = -1;
                                                                                                                                                map[f / 7][f % 7] = -1;
                                                                                                                                                map[g / 7][g % 7] = -1;
                                                                                                                                                map[h / 7][h % 7] = -1;
                                                                                                                                                map[i / 7][i % 7] = -1;
                                                                                                                                                map[j / 7][j % 7] = -1;
                                                                                                                                                map[k / 7][k % 7] = -1;
                                                                                                                                                map[l / 7][l % 7] = -1;
                                                                                                                                                map[m / 7][m % 7] = -1;
                                                                                                                                                map[n / 7][n % 7] = -1;
                                                                                                                                                map[o / 7][o % 7] = -1;
                                                                                                                                                map[p / 7][p % 7] = -1;
                                                                                                                                                map[q / 7][q % 7] = -1;
                                                                                                                                                map[r / 7][r % 7] = -1;
                                                                                                                                                map[s / 7][s % 7] = -1;
                                                                                                                                                map[t / 7][t % 7] = -1;
                                                                                                                                                map[u / 7][u % 7] = -1;
                                                                                                                                                map[v / 7][v % 7] = -1;
                                                                                                                                                map[w / 7][w % 7] = -1;
                                                                                                                                                map[x / 7][x % 7] = -1;
                                                                                                                                                map[y / 7][y % 7] = -1;
                                                                                                                                                map[z / 7][z % 7] = -1;
                                                                                                                                                map[aa / 7][aa % 7] = -1;
                                                                                                                                                map[bb / 7][bb % 7] = -1;
                                                                                                                                                map[cc / 7][cc % 7] = -1;
                                                                                                                                                map[dd / 7][dd % 7] = -1;
                                                                                                                                                map[ee / 7][ee % 7] = -1;
                                                                                                                                                map[ff / 7][ff % 7] = -1;
                                                                                                                                                map[gg / 7][gg % 7] = -1;
                                                                                                                                                map[hh / 7][hh % 7] = -1;
                                                                                                                                                map[ii / 7][ii % 7] = -1;
                                                                                                                                                check();
                                                                                                                                                show();
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    system("clear");
                                                                                                                                                    init();
                                                                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                                                                    map[y / 7][y % 7] = -1;
                                                                                                                                                    map[z / 7][z % 7] = -1;
                                                                                                                                                    map[aa / 7][aa % 7] = -1;
                                                                                                                                                    map[bb / 7][bb % 7] = -1;
                                                                                                                                                    map[cc / 7][cc % 7] = -1;
                                                                                                                                                    map[dd / 7][dd % 7] = -1;
                                                                                                                                                    map[ee / 7][ee % 7] = -1;
                                                                                                                                                    map[ff / 7][ff % 7] = -1;
                                                                                                                                                    map[gg / 7][gg % 7] = -1;
                                                                                                                                                    map[hh / 7][hh % 7] = -1;
                                                                                                                                                    map[ii / 7][ii % 7] = -1;
                                                                                                                                                    map[jj / 7][jj % 7] = -1;
                                                                                                                                                    check();
                                                                                                                                                    show();
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        system("clear");
                                                                                                                                                        init();
                                                                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                                                                        map[z / 7][z % 7] = -1;
                                                                                                                                                        map[aa / 7][aa % 7] = -1;
                                                                                                                                                        map[bb / 7][bb % 7] = -1;
                                                                                                                                                        map[cc / 7][cc % 7] = -1;
                                                                                                                                                        map[dd / 7][dd % 7] = -1;
                                                                                                                                                        map[ee / 7][ee % 7] = -1;
                                                                                                                                                        map[ff / 7][ff % 7] = -1;
                                                                                                                                                        map[gg / 7][gg % 7] = -1;
                                                                                                                                                        map[hh / 7][hh % 7] = -1;
                                                                                                                                                        map[ii / 7][ii % 7] = -1;
                                                                                                                                                        map[jj / 7][jj % 7] = -1;
                                                                                                                                                        map[kk / 7][kk % 7] = -1;
                                                                                                                                                        check();
                                                                                                                                                        show();
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            system("clear");
                                                                                                                                                            init();
                                                                                                                                                            map[a / 7][a % 7] = -1;
                                                                                                                                                            map[b / 7][b % 7] = -1;
                                                                                                                                                            map[c / 7][c % 7] = -1;
                                                                                                                                                            map[d / 7][d % 7] = -1;
                                                                                                                                                            map[e / 7][e % 7] = -1;
                                                                                                                                                            map[f / 7][f % 7] = -1;
                                                                                                                                                            map[g / 7][g % 7] = -1;
                                                                                                                                                            map[h / 7][h % 7] = -1;
                                                                                                                                                            map[i / 7][i % 7] = -1;
                                                                                                                                                            map[j / 7][j % 7] = -1;
                                                                                                                                                            map[k / 7][k % 7] = -1;
                                                                                                                                                            map[l / 7][l % 7] = -1;
                                                                                                                                                            map[m / 7][m % 7] = -1;
                                                                                                                                                            map[n / 7][n % 7] = -1;
                                                                                                                                                            map[o / 7][o % 7] = -1;
                                                                                                                                                            map[p / 7][p % 7] = -1;
                                                                                                                                                            map[q / 7][q % 7] = -1;
                                                                                                                                                            map[r / 7][r % 7] = -1;
                                                                                                                                                            map[s / 7][s % 7] = -1;
                                                                                                                                                            map[t / 7][t % 7] = -1;
                                                                                                                                                            map[u / 7][u % 7] = -1;
                                                                                                                                                            map[v / 7][v % 7] = -1;
                                                                                                                                                            map[w / 7][w % 7] = -1;
                                                                                                                                                            map[x / 7][x % 7] = -1;
                                                                                                                                                            map[y / 7][y % 7] = -1;
                                                                                                                                                            map[z / 7][z % 7] = -1;
                                                                                                                                                            map[aa / 7][aa % 7] = -1;
                                                                                                                                                            map[bb / 7][bb % 7] = -1;
                                                                                                                                                            map[cc / 7][cc % 7] = -1;
                                                                                                                                                            map[dd / 7][dd % 7] = -1;
                                                                                                                                                            map[ee / 7][ee % 7] = -1;
                                                                                                                                                            map[ff / 7][ff % 7] = -1;
                                                                                                                                                            map[gg / 7][gg % 7] = -1;
                                                                                                                                                            map[hh / 7][hh % 7] = -1;
                                                                                                                                                            map[ii / 7][ii % 7] = -1;
                                                                                                                                                            map[jj / 7][jj % 7] = -1;
                                                                                                                                                            map[kk / 7][kk % 7] = -1;
                                                                                                                                                            map[ll / 7][ll % 7] = -1;
                                                                                                                                                            check();
                                                                                                                                                            show();
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                system("clear");
                                                                                                                                                                init();
                                                                                                                                                                map[a / 7][a % 7] = -1;
                                                                                                                                                                map[b / 7][b % 7] = -1;
                                                                                                                                                                map[c / 7][c % 7] = -1;
                                                                                                                                                                map[d / 7][d % 7] = -1;
                                                                                                                                                                map[e / 7][e % 7] = -1;
                                                                                                                                                                map[f / 7][f % 7] = -1;
                                                                                                                                                                map[g / 7][g % 7] = -1;
                                                                                                                                                                map[h / 7][h % 7] = -1;
                                                                                                                                                                map[i / 7][i % 7] = -1;
                                                                                                                                                                map[j / 7][j % 7] = -1;
                                                                                                                                                                map[k / 7][k % 7] = -1;
                                                                                                                                                                map[l / 7][l % 7] = -1;
                                                                                                                                                                map[m / 7][m % 7] = -1;
                                                                                                                                                                map[n / 7][n % 7] = -1;
                                                                                                                                                                map[o / 7][o % 7] = -1;
                                                                                                                                                                map[p / 7][p % 7] = -1;
                                                                                                                                                                map[q / 7][q % 7] = -1;
                                                                                                                                                                map[r / 7][r % 7] = -1;
                                                                                                                                                                map[s / 7][s % 7] = -1;
                                                                                                                                                                map[t / 7][t % 7] = -1;
                                                                                                                                                                map[u / 7][u % 7] = -1;
                                                                                                                                                                map[v / 7][v % 7] = -1;
                                                                                                                                                                map[w / 7][w % 7] = -1;
                                                                                                                                                                map[x / 7][x % 7] = -1;
                                                                                                                                                                map[y / 7][y % 7] = -1;
                                                                                                                                                                map[z / 7][z % 7] = -1;
                                                                                                                                                                map[aa / 7][aa % 7] = -1;
                                                                                                                                                                map[bb / 7][bb % 7] = -1;
                                                                                                                                                                map[cc / 7][cc % 7] = -1;
                                                                                                                                                                map[dd / 7][dd % 7] = -1;
                                                                                                                                                                map[ee / 7][ee % 7] = -1;
                                                                                                                                                                map[ff / 7][ff % 7] = -1;
                                                                                                                                                                map[gg / 7][gg % 7] = -1;
                                                                                                                                                                map[hh / 7][hh % 7] = -1;
                                                                                                                                                                map[ii / 7][ii % 7] = -1;
                                                                                                                                                                map[jj / 7][jj % 7] = -1;
                                                                                                                                                                map[kk / 7][kk % 7] = -1;
                                                                                                                                                                map[ll / 7][ll % 7] = -1;
                                                                                                                                                                map[mm / 7][mm % 7] = -1;
                                                                                                                                                                check();
                                                                                                                                                                show();
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    system("clear");
                                                                                                                                                                    init();
                                                                                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                                                                                    map[y / 7][y % 7] = -1;
                                                                                                                                                                    map[z / 7][z % 7] = -1;
                                                                                                                                                                    map[aa / 7][aa % 7] = -1;
                                                                                                                                                                    map[bb / 7][bb % 7] = -1;
                                                                                                                                                                    map[cc / 7][cc % 7] = -1;
                                                                                                                                                                    map[dd / 7][dd % 7] = -1;
                                                                                                                                                                    map[ee / 7][ee % 7] = -1;
                                                                                                                                                                    map[ff / 7][ff % 7] = -1;
                                                                                                                                                                    map[gg / 7][gg % 7] = -1;
                                                                                                                                                                    map[hh / 7][hh % 7] = -1;
                                                                                                                                                                    map[ii / 7][ii % 7] = -1;
                                                                                                                                                                    map[jj / 7][jj % 7] = -1;
                                                                                                                                                                    map[kk / 7][kk % 7] = -1;
                                                                                                                                                                    map[ll / 7][ll % 7] = -1;
                                                                                                                                                                    map[mm / 7][mm % 7] = -1;
                                                                                                                                                                    map[nn / 7][nn % 7] = -1;
                                                                                                                                                                    check();
                                                                                                                                                                    show();
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        system("clear");
                                                                                                                                                                        init();
                                                                                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                                                                                        map[z / 7][z % 7] = -1;
                                                                                                                                                                        map[aa / 7][aa % 7] = -1;
                                                                                                                                                                        map[bb / 7][bb % 7] = -1;
                                                                                                                                                                        map[cc / 7][cc % 7] = -1;
                                                                                                                                                                        map[dd / 7][dd % 7] = -1;
                                                                                                                                                                        map[ee / 7][ee % 7] = -1;
                                                                                                                                                                        map[ff / 7][ff % 7] = -1;
                                                                                                                                                                        map[gg / 7][gg % 7] = -1;
                                                                                                                                                                        map[hh / 7][hh % 7] = -1;
                                                                                                                                                                        map[ii / 7][ii % 7] = -1;
                                                                                                                                                                        map[jj / 7][jj % 7] = -1;
                                                                                                                                                                        map[kk / 7][kk % 7] = -1;
                                                                                                                                                                        map[ll / 7][ll % 7] = -1;
                                                                                                                                                                        map[mm / 7][mm % 7] = -1;
                                                                                                                                                                        map[nn / 7][nn % 7] = -1;
                                                                                                                                                                        map[oo / 7][oo % 7] = -1;
                                                                                                                                                                        check();
                                                                                                                                                                        show();
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            system("clear");
                                                                                                                                                                            init();
                                                                                                                                                                            map[a / 7][a % 7] = -1;
                                                                                                                                                                            map[b / 7][b % 7] = -1;
                                                                                                                                                                            map[c / 7][c % 7] = -1;
                                                                                                                                                                            map[d / 7][d % 7] = -1;
                                                                                                                                                                            map[e / 7][e % 7] = -1;
                                                                                                                                                                            map[f / 7][f % 7] = -1;
                                                                                                                                                                            map[g / 7][g % 7] = -1;
                                                                                                                                                                            map[h / 7][h % 7] = -1;
                                                                                                                                                                            map[i / 7][i % 7] = -1;
                                                                                                                                                                            map[j / 7][j % 7] = -1;
                                                                                                                                                                            map[k / 7][k % 7] = -1;
                                                                                                                                                                            map[l / 7][l % 7] = -1;
                                                                                                                                                                            map[m / 7][m % 7] = -1;
                                                                                                                                                                            map[n / 7][n % 7] = -1;
                                                                                                                                                                            map[o / 7][o % 7] = -1;
                                                                                                                                                                            map[p / 7][p % 7] = -1;
                                                                                                                                                                            map[q / 7][q % 7] = -1;
                                                                                                                                                                            map[r / 7][r % 7] = -1;
                                                                                                                                                                            map[s / 7][s % 7] = -1;
                                                                                                                                                                            map[t / 7][t % 7] = -1;
                                                                                                                                                                            map[u / 7][u % 7] = -1;
                                                                                                                                                                            map[v / 7][v % 7] = -1;
                                                                                                                                                                            map[w / 7][w % 7] = -1;
                                                                                                                                                                            map[x / 7][x % 7] = -1;
                                                                                                                                                                            map[y / 7][y % 7] = -1;
                                                                                                                                                                            map[z / 7][z % 7] = -1;
                                                                                                                                                                            map[aa / 7][aa % 7] = -1;
                                                                                                                                                                            map[bb / 7][bb % 7] = -1;
                                                                                                                                                                            map[cc / 7][cc % 7] = -1;
                                                                                                                                                                            map[dd / 7][dd % 7] = -1;
                                                                                                                                                                            map[ee / 7][ee % 7] = -1;
                                                                                                                                                                            map[ff / 7][ff % 7] = -1;
                                                                                                                                                                            map[gg / 7][gg % 7] = -1;
                                                                                                                                                                            map[hh / 7][hh % 7] = -1;
                                                                                                                                                                            map[ii / 7][ii % 7] = -1;
                                                                                                                                                                            map[jj / 7][jj % 7] = -1;
                                                                                                                                                                            map[kk / 7][kk % 7] = -1;
                                                                                                                                                                            map[ll / 7][ll % 7] = -1;
                                                                                                                                                                            map[mm / 7][mm % 7] = -1;
                                                                                                                                                                            map[nn / 7][nn % 7] = -1;
                                                                                                                                                                            map[oo / 7][oo % 7] = -1;
                                                                                                                                                                            map[pp / 7][pp % 7] = -1;
                                                                                                                                                                            check();
                                                                                                                                                                            show();
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                system("clear");
                                                                                                                                                                                init();
                                                                                                                                                                                map[a / 7][a % 7] = -1;
                                                                                                                                                                                map[b / 7][b % 7] = -1;
                                                                                                                                                                                map[c / 7][c % 7] = -1;
                                                                                                                                                                                map[d / 7][d % 7] = -1;
                                                                                                                                                                                map[e / 7][e % 7] = -1;
                                                                                                                                                                                map[f / 7][f % 7] = -1;
                                                                                                                                                                                map[g / 7][g % 7] = -1;
                                                                                                                                                                                map[h / 7][h % 7] = -1;
                                                                                                                                                                                map[i / 7][i % 7] = -1;
                                                                                                                                                                                map[j / 7][j % 7] = -1;
                                                                                                                                                                                map[k / 7][k % 7] = -1;
                                                                                                                                                                                map[l / 7][l % 7] = -1;
                                                                                                                                                                                map[m / 7][m % 7] = -1;
                                                                                                                                                                                map[n / 7][n % 7] = -1;
                                                                                                                                                                                map[o / 7][o % 7] = -1;
                                                                                                                                                                                map[p / 7][p % 7] = -1;
                                                                                                                                                                                map[q / 7][q % 7] = -1;
                                                                                                                                                                                map[r / 7][r % 7] = -1;
                                                                                                                                                                                map[s / 7][s % 7] = -1;
                                                                                                                                                                                map[t / 7][t % 7] = -1;
                                                                                                                                                                                map[u / 7][u % 7] = -1;
                                                                                                                                                                                map[v / 7][v % 7] = -1;
                                                                                                                                                                                map[w / 7][w % 7] = -1;
                                                                                                                                                                                map[x / 7][x % 7] = -1;
                                                                                                                                                                                map[y / 7][y % 7] = -1;
                                                                                                                                                                                map[z / 7][z % 7] = -1;
                                                                                                                                                                                map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                check();
                                                                                                                                                                                show();
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                for (int rr = 0; rr < qq; rr++)
                                                                                                                                                                                {
                                                                                                                                                                                    system("clear");
                                                                                                                                                                                    init();
                                                                                                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                                                                                                    map[y / 7][y % 7] = -1;
                                                                                                                                                                                    map[z / 7][z % 7] = -1;
                                                                                                                                                                                    map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                    map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                    map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                    map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                    map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                    map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                    map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                    map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                    map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                    map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                    map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                    map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                    map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                    map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                    map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                    map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                    map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                    map[rr / 7][rr % 7] = -1;
                                                                                                                                                                                    check();
                                                                                                                                                                                    show();
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                for (int rr = 0; rr < qq; rr++)
                                                                                                                                                                                {
                                                                                                                                                                                    for (int ss = 0; ss < rr; ss++)
                                                                                                                                                                                    {
                                                                                                                                                                                        system("clear");
                                                                                                                                                                                        init();
                                                                                                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                                                                                                        map[z / 7][z % 7] = -1;
                                                                                                                                                                                        map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                        map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                        map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                        map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                        map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                        map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                        map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                        map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                        map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                        map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                        map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                        map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                        map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                        map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                        map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                        map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                        map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                        map[rr / 7][rr % 7] = -1;
                                                                                                                                                                                        map[ss / 7][ss % 7] = -1;
                                                                                                                                                                                        check();
                                                                                                                                                                                        show();
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                for (int rr = 0; rr < qq; rr++)
                                                                                                                                                                                {
                                                                                                                                                                                    for (int ss = 0; ss < rr; ss++)
                                                                                                                                                                                    {
                                                                                                                                                                                        for (int tt = 0; tt < ss; tt++)
                                                                                                                                                                                        {
                                                                                                                                                                                            system("clear");
                                                                                                                                                                                            init();
                                                                                                                                                                                            map[a / 7][a % 7] = -1;
                                                                                                                                                                                            map[b / 7][b % 7] = -1;
                                                                                                                                                                                            map[c / 7][c % 7] = -1;
                                                                                                                                                                                            map[d / 7][d % 7] = -1;
                                                                                                                                                                                            map[e / 7][e % 7] = -1;
                                                                                                                                                                                            map[f / 7][f % 7] = -1;
                                                                                                                                                                                            map[g / 7][g % 7] = -1;
                                                                                                                                                                                            map[h / 7][h % 7] = -1;
                                                                                                                                                                                            map[i / 7][i % 7] = -1;
                                                                                                                                                                                            map[j / 7][j % 7] = -1;
                                                                                                                                                                                            map[k / 7][k % 7] = -1;
                                                                                                                                                                                            map[l / 7][l % 7] = -1;
                                                                                                                                                                                            map[m / 7][m % 7] = -1;
                                                                                                                                                                                            map[n / 7][n % 7] = -1;
                                                                                                                                                                                            map[o / 7][o % 7] = -1;
                                                                                                                                                                                            map[p / 7][p % 7] = -1;
                                                                                                                                                                                            map[q / 7][q % 7] = -1;
                                                                                                                                                                                            map[r / 7][r % 7] = -1;
                                                                                                                                                                                            map[s / 7][s % 7] = -1;
                                                                                                                                                                                            map[t / 7][t % 7] = -1;
                                                                                                                                                                                            map[u / 7][u % 7] = -1;
                                                                                                                                                                                            map[v / 7][v % 7] = -1;
                                                                                                                                                                                            map[w / 7][w % 7] = -1;
                                                                                                                                                                                            map[x / 7][x % 7] = -1;
                                                                                                                                                                                            map[y / 7][y % 7] = -1;
                                                                                                                                                                                            map[z / 7][z % 7] = -1;
                                                                                                                                                                                            map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                            map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                            map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                            map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                            map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                            map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                            map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                            map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                            map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                            map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                            map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                            map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                            map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                            map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                            map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                            map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                            map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                            map[rr / 7][rr % 7] = -1;
                                                                                                                                                                                            map[ss / 7][ss % 7] = -1;
                                                                                                                                                                                            map[tt / 7][tt % 7] = -1;
                                                                                                                                                                                            check();
                                                                                                                                                                                            show();
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                for (int rr = 0; rr < qq; rr++)
                                                                                                                                                                                {
                                                                                                                                                                                    for (int ss = 0; ss < rr; ss++)
                                                                                                                                                                                    {
                                                                                                                                                                                        for (int tt = 0; tt < ss; tt++)
                                                                                                                                                                                        {
                                                                                                                                                                                            for (int uu = 0; uu < tt; uu++)
                                                                                                                                                                                            {
                                                                                                                                                                                                system("clear");
                                                                                                                                                                                                init();
                                                                                                                                                                                                map[a / 7][a % 7] = -1;
                                                                                                                                                                                                map[b / 7][b % 7] = -1;
                                                                                                                                                                                                map[c / 7][c % 7] = -1;
                                                                                                                                                                                                map[d / 7][d % 7] = -1;
                                                                                                                                                                                                map[e / 7][e % 7] = -1;
                                                                                                                                                                                                map[f / 7][f % 7] = -1;
                                                                                                                                                                                                map[g / 7][g % 7] = -1;
                                                                                                                                                                                                map[h / 7][h % 7] = -1;
                                                                                                                                                                                                map[i / 7][i % 7] = -1;
                                                                                                                                                                                                map[j / 7][j % 7] = -1;
                                                                                                                                                                                                map[k / 7][k % 7] = -1;
                                                                                                                                                                                                map[l / 7][l % 7] = -1;
                                                                                                                                                                                                map[m / 7][m % 7] = -1;
                                                                                                                                                                                                map[n / 7][n % 7] = -1;
                                                                                                                                                                                                map[o / 7][o % 7] = -1;
                                                                                                                                                                                                map[p / 7][p % 7] = -1;
                                                                                                                                                                                                map[q / 7][q % 7] = -1;
                                                                                                                                                                                                map[r / 7][r % 7] = -1;
                                                                                                                                                                                                map[s / 7][s % 7] = -1;
                                                                                                                                                                                                map[t / 7][t % 7] = -1;
                                                                                                                                                                                                map[u / 7][u % 7] = -1;
                                                                                                                                                                                                map[v / 7][v % 7] = -1;
                                                                                                                                                                                                map[w / 7][w % 7] = -1;
                                                                                                                                                                                                map[x / 7][x % 7] = -1;
                                                                                                                                                                                                map[y / 7][y % 7] = -1;
                                                                                                                                                                                                map[z / 7][z % 7] = -1;
                                                                                                                                                                                                map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                                map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                                map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                                map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                                map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                                map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                                map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                                map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                                map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                                map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                                map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                                map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                                map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                                map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                                map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                                map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                                map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                                map[rr / 7][rr % 7] = -1;
                                                                                                                                                                                                map[ss / 7][ss % 7] = -1;
                                                                                                                                                                                                map[tt / 7][tt % 7] = -1;
                                                                                                                                                                                                map[uu / 7][uu % 7] = -1;
                                                                                                                                                                                                check();
                                                                                                                                                                                                show();
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                for (int rr = 0; rr < qq; rr++)
                                                                                                                                                                                {
                                                                                                                                                                                    for (int ss = 0; ss < rr; ss++)
                                                                                                                                                                                    {
                                                                                                                                                                                        for (int tt = 0; tt < ss; tt++)
                                                                                                                                                                                        {
                                                                                                                                                                                            for (int uu = 0; uu < tt; uu++)
                                                                                                                                                                                            {
                                                                                                                                                                                                for (int vv = 0; vv < uu; vv++)
                                                                                                                                                                                                {
                                                                                                                                                                                                    system("clear");
                                                                                                                                                                                                    init();
                                                                                                                                                                                                    map[a / 7][a % 7] = -1;
                                                                                                                                                                                                    map[b / 7][b % 7] = -1;
                                                                                                                                                                                                    map[c / 7][c % 7] = -1;
                                                                                                                                                                                                    map[d / 7][d % 7] = -1;
                                                                                                                                                                                                    map[e / 7][e % 7] = -1;
                                                                                                                                                                                                    map[f / 7][f % 7] = -1;
                                                                                                                                                                                                    map[g / 7][g % 7] = -1;
                                                                                                                                                                                                    map[h / 7][h % 7] = -1;
                                                                                                                                                                                                    map[i / 7][i % 7] = -1;
                                                                                                                                                                                                    map[j / 7][j % 7] = -1;
                                                                                                                                                                                                    map[k / 7][k % 7] = -1;
                                                                                                                                                                                                    map[l / 7][l % 7] = -1;
                                                                                                                                                                                                    map[m / 7][m % 7] = -1;
                                                                                                                                                                                                    map[n / 7][n % 7] = -1;
                                                                                                                                                                                                    map[o / 7][o % 7] = -1;
                                                                                                                                                                                                    map[p / 7][p % 7] = -1;
                                                                                                                                                                                                    map[q / 7][q % 7] = -1;
                                                                                                                                                                                                    map[r / 7][r % 7] = -1;
                                                                                                                                                                                                    map[s / 7][s % 7] = -1;
                                                                                                                                                                                                    map[t / 7][t % 7] = -1;
                                                                                                                                                                                                    map[u / 7][u % 7] = -1;
                                                                                                                                                                                                    map[v / 7][v % 7] = -1;
                                                                                                                                                                                                    map[w / 7][w % 7] = -1;
                                                                                                                                                                                                    map[x / 7][x % 7] = -1;
                                                                                                                                                                                                    map[y / 7][y % 7] = -1;
                                                                                                                                                                                                    map[z / 7][z % 7] = -1;
                                                                                                                                                                                                    map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                                    map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                                    map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                                    map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                                    map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                                    map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                                    map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                                    map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                                    map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                                    map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                                    map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                                    map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                                    map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                                    map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                                    map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                                    map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                                    map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                                    map[rr / 7][rr % 7] = -1;
                                                                                                                                                                                                    map[ss / 7][ss % 7] = -1;
                                                                                                                                                                                                    map[tt / 7][tt % 7] = -1;
                                                                                                                                                                                                    map[uu / 7][uu % 7] = -1;
                                                                                                                                                                                                    map[vv / 7][vv % 7] = -1;
                                                                                                                                                                                                    check();
                                                                                                                                                                                                    show();
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int a = 0; a < 49; a++)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < b; c++)
            {
                for (int d = 0; d < c; d++)
                {
                    for (int e = 0; e < d; e++)
                    {
                        for (int f = 0; f < e; f++)
                        {
                            for (int g = 0; g < f; g++)
                            {
                                for (int h = 0; h < g; h++)
                                {
                                    for (int i = 0; i < h; i++)
                                    {
                                        for (int j = 0; j < i; j++)
                                        {
                                            for (int k = 0; k < j; k++)
                                            {
                                                for (int l = 0; l < k; l++)
                                                {
                                                    for (int m = 0; m < l; m++)
                                                    {
                                                        for (int n = 0; n < m; n++)
                                                        {
                                                            for (int o = 0; o < n; o++)
                                                            {
                                                                for (int p = 0; p < o; p++)
                                                                {
                                                                    for (int q = 0; q < p; q++)
                                                                    {
                                                                        for (int r = 0; r < q; r++)
                                                                        {
                                                                            for (int s = 0; s < r; s++)
                                                                            {
                                                                                for (int t = 0; t < s; t++)
                                                                                {
                                                                                    for (int u = 0; u < t; u++)
                                                                                    {
                                                                                        for (int v = 0; v < u; v++)
                                                                                        {
                                                                                            for (int w = 0; w < v; w++)
                                                                                            {
                                                                                                for (int x = 0; x < w; x++)
                                                                                                {
                                                                                                    for (int y = 0; y < x; y++)
                                                                                                    {
                                                                                                        for (int z = 0; z < y; z++)
                                                                                                        {
                                                                                                            for (int aa = 0; aa < z; aa++)
                                                                                                            {
                                                                                                                for (int bb = 0; bb < aa; bb++)
                                                                                                                {
                                                                                                                    for (int cc = 0; cc < bb; cc++)
                                                                                                                    {
                                                                                                                        for (int dd = 0; dd < cc; dd++)
                                                                                                                        {
                                                                                                                            for (int ee = 0; ee < dd; ee++)
                                                                                                                            {
                                                                                                                                for (int ff = 0; ff < ee; ff++)
                                                                                                                                {
                                                                                                                                    for (int gg = 0; gg < ff; gg++)
                                                                                                                                    {
                                                                                                                                        for (int hh = 0; hh < gg; hh++)
                                                                                                                                        {
                                                                                                                                            for (int ii = 0; ii < hh; ii++)
                                                                                                                                            {
                                                                                                                                                for (int jj = 0; jj < ii; jj++)
                                                                                                                                                {
                                                                                                                                                    for (int kk = 0; kk < jj; kk++)
                                                                                                                                                    {
                                                                                                                                                        for (int ll = 0; ll < kk; ll++)
                                                                                                                                                        {
                                                                                                                                                            for (int mm = 0; mm < ll; mm++)
                                                                                                                                                            {
                                                                                                                                                                for (int nn = 0; nn < mm; nn++)
                                                                                                                                                                {
                                                                                                                                                                    for (int oo = 0; oo < nn; oo++)
                                                                                                                                                                    {
                                                                                                                                                                        for (int pp = 0; pp < oo; pp++)
                                                                                                                                                                        {
                                                                                                                                                                            for (int qq = 0; qq < pp; qq++)
                                                                                                                                                                            {
                                                                                                                                                                                for (int rr = 0; rr < qq; rr++)
                                                                                                                                                                                {
                                                                                                                                                                                    for (int ss = 0; ss < rr; ss++)
                                                                                                                                                                                    {
                                                                                                                                                                                        for (int tt = 0; tt < ss; tt++)
                                                                                                                                                                                        {
                                                                                                                                                                                            for (int uu = 0; uu < tt; uu++)
                                                                                                                                                                                            {
                                                                                                                                                                                                for (int vv = 0; vv < uu; vv++)
                                                                                                                                                                                                {
                                                                                                                                                                                                    for (int ww = 0; ww < vv; ww++)
                                                                                                                                                                                                    {
                                                                                                                                                                                                        system("clear");
                                                                                                                                                                                                        init();
                                                                                                                                                                                                        map[a / 7][a % 7] = -1;
                                                                                                                                                                                                        map[b / 7][b % 7] = -1;
                                                                                                                                                                                                        map[c / 7][c % 7] = -1;
                                                                                                                                                                                                        map[d / 7][d % 7] = -1;
                                                                                                                                                                                                        map[e / 7][e % 7] = -1;
                                                                                                                                                                                                        map[f / 7][f % 7] = -1;
                                                                                                                                                                                                        map[g / 7][g % 7] = -1;
                                                                                                                                                                                                        map[h / 7][h % 7] = -1;
                                                                                                                                                                                                        map[i / 7][i % 7] = -1;
                                                                                                                                                                                                        map[j / 7][j % 7] = -1;
                                                                                                                                                                                                        map[k / 7][k % 7] = -1;
                                                                                                                                                                                                        map[l / 7][l % 7] = -1;
                                                                                                                                                                                                        map[m / 7][m % 7] = -1;
                                                                                                                                                                                                        map[n / 7][n % 7] = -1;
                                                                                                                                                                                                        map[o / 7][o % 7] = -1;
                                                                                                                                                                                                        map[p / 7][p % 7] = -1;
                                                                                                                                                                                                        map[q / 7][q % 7] = -1;
                                                                                                                                                                                                        map[r / 7][r % 7] = -1;
                                                                                                                                                                                                        map[s / 7][s % 7] = -1;
                                                                                                                                                                                                        map[t / 7][t % 7] = -1;
                                                                                                                                                                                                        map[u / 7][u % 7] = -1;
                                                                                                                                                                                                        map[v / 7][v % 7] = -1;
                                                                                                                                                                                                        map[w / 7][w % 7] = -1;
                                                                                                                                                                                                        map[x / 7][x % 7] = -1;
                                                                                                                                                                                                        map[y / 7][y % 7] = -1;
                                                                                                                                                                                                        map[z / 7][z % 7] = -1;
                                                                                                                                                                                                        map[aa / 7][aa % 7] = -1;
                                                                                                                                                                                                        map[bb / 7][bb % 7] = -1;
                                                                                                                                                                                                        map[cc / 7][cc % 7] = -1;
                                                                                                                                                                                                        map[dd / 7][dd % 7] = -1;
                                                                                                                                                                                                        map[ee / 7][ee % 7] = -1;
                                                                                                                                                                                                        map[ff / 7][ff % 7] = -1;
                                                                                                                                                                                                        map[gg / 7][gg % 7] = -1;
                                                                                                                                                                                                        map[hh / 7][hh % 7] = -1;
                                                                                                                                                                                                        map[ii / 7][ii % 7] = -1;
                                                                                                                                                                                                        map[jj / 7][jj % 7] = -1;
                                                                                                                                                                                                        map[kk / 7][kk % 7] = -1;
                                                                                                                                                                                                        map[ll / 7][ll % 7] = -1;
                                                                                                                                                                                                        map[mm / 7][mm % 7] = -1;
                                                                                                                                                                                                        map[nn / 7][nn % 7] = -1;
                                                                                                                                                                                                        map[oo / 7][oo % 7] = -1;
                                                                                                                                                                                                        map[pp / 7][pp % 7] = -1;
                                                                                                                                                                                                        map[qq / 7][qq % 7] = -1;
                                                                                                                                                                                                        map[rr / 7][rr % 7] = -1;
                                                                                                                                                                                                        map[ss / 7][ss % 7] = -1;
                                                                                                                                                                                                        map[tt / 7][tt % 7] = -1;
                                                                                                                                                                                                        map[uu / 7][uu % 7] = -1;
                                                                                                                                                                                                        map[vv / 7][vv % 7] = -1;
                                                                                                                                                                                                        map[ww / 7][ww % 7] = -1;
                                                                                                                                                                                                        check();
                                                                                                                                                                                                        show();
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}