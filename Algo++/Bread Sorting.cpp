#include <bits/stdc++.h>
using namespace std;

void rotate_right(int *arr, int ind){
    int temp = arr[ind - 1];
    arr[ind - 1] = arr[ind + 1];
    arr[ind + 1] = arr[ind];
    arr[ind] = temp;
}

void shift(int *arr, int src, int dst){
   while (src - dst >= 2){
       rotate_right(arr, src - 1); 
       src -= 2;
   }
   if (src == dst)
       return;
   rotate_right(arr, dst + 1);
   rotate_right(arr, dst + 1);
}

bool last(int *goal, int *arr){
    int tries = 3;
    while (tries-- > 0){
        rotate_right(arr, 1);
        if (goal[0] == arr[0] && goal[1] == arr[1] && goal[2] == arr[2])
            return true;
    }
    return false;
}

int find(int *arr, int s, int n,  int item){
    for (int i = s; i < n; i++){
        if (arr[i] == item)
            return i;
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);
    int *bread = (int *) malloc(n * sizeof(int));
    int *sorted = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        scanf("%d", &bread[i]);
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &sorted[i]);
    }

    for (int i = 0; i < n - 3; i++){
        int src = find(bread, i, n, sorted[i]);
        shift(bread, src, i);
    }
    
    // check last three
    if (last(sorted + n - 3, bread + n - 3)){
        printf("Possible\n");
    }
    else{
        printf("Impossible\n");
    }

    free(sorted);
    free(bread);
    
    return 0;
}