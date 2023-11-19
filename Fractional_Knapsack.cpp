#include <stdio.h>
#include <stdlib.h>

class Item {
    public:
    int weight;
    int value;
};

int compare(const void* a, const void* b) {
    double ratioA = ((Item*)a)->value / (double)((Item*)a)->weight;
    double ratioB = ((Item*)b)->value / (double)((Item*)b)->weight;
    return (ratioB > ratioA) ? 1 : -1;
}

double fractionalKnapsack(int capacity,Item items[], int n) {
    qsort(items, n, sizeof(Item), compare);

    double totalValue = 0.0;

    for (int i = 0; i < n && capacity > 0; i++) {
        int currentWeight = items[i].weight;
        int currentValue = items[i].value;

        if (currentWeight <= capacity) {
            totalValue += currentValue;
            capacity -= currentWeight;
        } else {
            totalValue += (currentValue / (double)currentWeight) * capacity;
            capacity = 0;
        }
    }

    return totalValue;
}

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    Item items[n];

    // Input values for items
    for (int i = 0; i < n; i++) {
        printf("Enter weight and value for item %d (e.g., 10 20): ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    int capacity;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    double result = fractionalKnapsack(capacity, items, n);

    printf("Maximum value in Knapsack = %.2f\n", result);

    return 0;
}
