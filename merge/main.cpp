//
//  main.cpp
//  merge
//
//  Created by Erick Rolando Dominguez Marquez on 3/26/19.
//  Copyright © 2019 Erick Rolando Dominguez Marquez. All rights reserved.
//

#include <iostream>
using namespace std;
void mergesort(int a[], int lo, int hi);
int main(int argc, const char * argv[]) {
 
    return 0;
}

void mergesort (int a[], int lo, int hi)
{
    int INFTY=9999999;
    if (hi <= lo){
        return;
    }
    
    int mid = lo + (hi - lo) / 2;
    mergesort(a, lo, mid);
    mergesort(a, mid +1, hi);
    int b[mid +2],c[mid+2];
    for(int k = lo; k <=mid; k++){

        b[k-lo] = a[k];
    }
    for(int k = mid + 1; k<= hi; k++){
        int c [mid];
        c[k-(mid+1)]=a[k];
    }
    b[mid-lo+1]=INFTY;c[hi-mid]=INFTY;
    
    int i=0,j=0;
    for(int k=lo;k<=hi;k++){
        if(c[j]<b[i]){
            a[k]=c[j++];
        }else{
            a[k]=b[i++];
        }
    }
    
}

