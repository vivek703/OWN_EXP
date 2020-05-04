// John works at a clothing store. He has a large pile of socks that he must pair by color for sale.
// Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

// For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _DataItem {
   int data;
   int key;
}DataItem;

char* readline();
char** split_string(char*);

int comp (const void * elem1, const void * elem2) {
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

// Complete the sockMerchant function below.
int sockMerchant(int n, int ar_count, int* ar)
{
    qsort(ar, ar_count, sizeof(int), comp);
    int t=0;
    int c=1;
    int prev = ar[0];
    for(int i = 1;i<n;i++){
        if(prev == ar[i])
            c++;
        else{
            t+=c/2;
            c=1;
            prev=ar[i];
        }
    }
    t+=c/2;
    return t;

}

int main(int argc, char *argv[])
{

    //FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    char* n_endptr;
    int in = 9;
    char n_str[128] = {0x0};
    char out[512] = {0x0};
    strcpy(out, "10 20 20 10 10 30 50 10 20");
    //char* n_str = "9"; //readline();
    snprintf(n_str,10, "%d", in);
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** ar_temp = split_string(out/*readline()*/);

    int* ar = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        char* ar_item_endptr;
        char* ar_item_str = *(ar_temp + i);
        int ar_item = strtol(ar_item_str, &ar_item_endptr, 10);

        if (ar_item_endptr == ar_item_str || *ar_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(ar + i) = ar_item;
    }

    int ar_count = n;

    int result = sockMerchant(n, ar_count, ar);

    //fprintf(fptr, "%d\n", result);

    //fclose(fptr);

    return 0;
}
char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) 
{
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
