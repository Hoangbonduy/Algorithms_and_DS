//Binary Search#include<stdio.h>int array[1001];int binSearch(int min, int max, int key);int main () {        int key, n; //minIdx,maxIdx        // Now that we have sorted an array already we will just    // use binary search and find the key value that we search for        scanf("%d %d", &n , &key);        for (int i = 0 ; i < n ; i++)        scanf("%d", (array+i));        printf("%d", binSearch(0, n, key));        return 0;}int binSearch(int min, int max, int key){        int mid = (min+max)/2;        if (array[mid]==key)        return mid;    else if (max < min)        return -1;        if (key < array[mid])        binSearch (min, mid-1, key);    else if (key > array[mid])        binSearch (mid+1, max, key);}