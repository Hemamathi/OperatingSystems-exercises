#include <iostream>
#include <iomanip>

using namespace std;
void compute(int *p1, int *p2, int col);
int main() {
    const int col = 4;
    const int row = 2;
    int A[row][col] = { { 1, 2, 3, 4},{ 5, 6 ,7, 8 } };
    int B[row][col] ;


    int *p1, *p2, *PtrA, *PtrB;

    PtrA = p1;
    PtrB = p2;

    for (int i = 0; i < row; ++i) {
        p1 = &A[i][0];
        p2 = &B[i][0];
        compute(p1, p2, col);
    }

    for (int i = 0; i < row; ++i) {
         PtrA = &A[i][0];;
        PtrB = &B[i][0];
        for (int j = 0; j < col; ++j) {
            cout << setw(5) << *PtrA;
            PtrA++;
        }

        cout << setw(10) << " ";
        for (int k = 0; k < col; ++k) {
            cout << setw(5) << *PtrB;
            PtrB++;
        }
        cout << setw(10) << " ";

        cout << endl;
  }

    return 0;
}

void compute(int *p1, int *p2, int col) {
    for (int j = col-1; j >= 0; j--) {
        *p2 = *(p1 + j);
        p2++;
    }
}
