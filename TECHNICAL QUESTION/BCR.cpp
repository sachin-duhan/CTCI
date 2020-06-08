#include <iostream>
#include <vector>

using namespace std;
// given two array find the intersection of the array!
int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 53}, arr2{2, 3, 4, 5, 56};
    int i = 0, j = 0;
    int ans = 0;
    while (i < arr.size() && j < arr2.size())
    {
        if (arr[i] == arr2[j])
        {
            ans++;
            i++;
            j++;
        }
        if (arr[i] < arr2[j])
            i++;
        else
            j++;
    }
    cout << ans << endl;

    return 0;
}
