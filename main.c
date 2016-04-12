//
//  main.c
//  
//
//  Created by David Benitez on 4/12/16.
//
//

#include <stdio.h>
#include "knapsack.h"

int main(){
     int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
 }