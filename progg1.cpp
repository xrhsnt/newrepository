#include <iostream>

using namespace std;

void atp() {
    int n, int m;
    cout << " enter a number of categories" << endl;
    cin >> n;
    cout << "enter a number of products for each category" << endl;
    cin >> m;

    int** D = new int* [n];
    for (int i = 0; i < n; i++) {
        D[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cout << "input the price of the product" << j << " from category " << i << endl;
            cin >> D[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << D[i][j] << endl;
        }
    }

}

int main()
{
}


