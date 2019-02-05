//
//  main.cpp
//  Diagonal Inversa
//
//  Created by Erick Rolando Dominguez Marquez on 2/5/19.
//  Copyright © 2019 Erick Rolando Dominguez Marquez. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int diag[3][3];
    for (int i=0; i<=3; i++){
        for (int j=0; j<=3; j++){
            if(j+i==2)
            cout << diag [i][j] << endl;
        }
    }
    return 0;
}
