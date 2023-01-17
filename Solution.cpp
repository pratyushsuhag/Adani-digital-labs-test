#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> make2Darr(int numberOfRows, int numberOfColumns)
{
    srand(time(0));
    vector<vector<int>> arr(numberOfRows, vector<int>(numberOfColumns, 0));
    for (int i = 0; i < numberOfRows; i++)
        for (int j = 0; j < numberOfColumns; j++)
            arr[i][j] = 1 + (rand() % 100);

    return arr;
}

vector<vector<int>> sort2Darr(int columnIndex, vector<vector<int>> arr)
{
    sort(arr.begin(), arr.end(),
         [columnIndex](const vector<int> &v1, const vector<int> &v2) -> bool
         {
             return v1[columnIndex] < v2[columnIndex];
         });
    return arr;
}

int main()
{
    vector<vector<int>> arr = make2Darr(10, 10);
    cout << "Before Sorting" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> arr2 = sort2Darr(2, arr);
    cout << "After Sorting" << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
