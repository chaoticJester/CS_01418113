//08 Stock Log File
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {

    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename) {
    FILE *file = fopen(filename, "r");
    int n, last_item = 0, found = 0;
    fscanf(file, "%d\n", &n);
    Product *stock = (Product*) malloc(sizeof(Product) * n);
    
    char id[8], time[8], item[30];
    int total;
    double cost;
    while(1) {
        if(fscanf(file, "%8[^,],%8[^,],%30[^,],%d,%lf\n", id, time, item, &total, &cost) == EOF){
            break;
        }
        // printf("%s, %d, %lf\n", item, total, cost);
        for(int i = 0; i < last_item; i++) {
            if(strcmp(stock[i].name, item) == 0) {
                stock[i].amount += total;
                stock[i].totalCost += cost;
                found = 1;
                break;
            }
        }
        if(found == 0) {
            strcpy(stock[last_item].name, item);
            stock[last_item].amount = total;
            stock[last_item].totalCost = cost;
            last_item++;
        } else {
            found = 0;
        }
    }

    printStock(stock, last_item);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}