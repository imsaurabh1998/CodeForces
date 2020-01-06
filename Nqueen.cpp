//
// Created by Saurabh on 1/2/2020.
//


#include<bits/stdc++.h>

using namespace std;


//->> type 1 Solution of NQueen Problem
bool isSafe(int queen[][50], int row, int col, int n) {

    for (int l = 0; l < n; l++) {
        if (queen[row][l] == 1) return false;
    }

    for (int l = 0; l < n; l++) {
        if (queen[l][col] == 1) return false;
    }


    int x = row;
    int y = col;

    while (x >= 0 && y >= 0) {

        if (queen[x][y] == 1) return false;

        x--; y--;
    }

    x = row;
    y = col;
    while (x >= 0 && y < n) {
        if (queen[x][y] == 1) return false;

        x--;
        y++;
    }

    return true;
}

bool queenSolve(int queen[][50], int i, int n) {

    if (i == n) {

        for (int j = 0; j < n; j++) {

            for (int k = 0; k < n; k++) {

                if (queen[j][k] == 1) cout << "Q";
                else cout << "_";
            }
            cout << endl;
        }

        cout << endl;
        return false;
    }


    for (int l = 0; l < n; l++) {


        if (isSafe(queen, i, l, n)) {
            queen[i][l] = 1;
            bool val = queenSolve(queen, i + 1, n);
            if (val) return true;

            queen[i][l] = 0;

        }
    }

    return false;
} //<<-- End of Type-1 solution

// -->> Type 2 solution of NQueen with DP

bitset<20> colunm ,leftDir,rightDir;


bool safePlace( int row, int col, int n){

    return !(colunm[col] || leftDir[row - col + n - 1] || rightDir[col + row]);
}

bool SolveQueen(int queen[][50], int i, int n){

    if(i==n){
        for (int j = 0; j < n; j++) {

            for (int k = 0; k < n; k++) {

                if (queen[j][k] == 1) cout << "Q";
                else cout << "_";
            }
            cout << endl;
        }

        cout << endl;
        return false;
    }
    for(int col=0;col<n;col++) {
        if (safePlace( i, col, n)){

            queen[i][col]= colunm[col]= leftDir[i-col+n-1]=rightDir[col+i]=1;
            bool newAns=SolveQueen(queen,i+1,n);
            if(newAns) return true;

            queen[i][col]= colunm[col]= leftDir[i-col+n-1]=rightDir[col+i]=0;
        }
    }
    return false;

}

//<<-- End of Type 2 solutino of NQueen with DP

int main() {

    int n;
    n = 4;

    int queen[50][50] = { 0 };
    //queenSolve(queen, 0, n);
   SolveQueen(queen,0,n);
}

